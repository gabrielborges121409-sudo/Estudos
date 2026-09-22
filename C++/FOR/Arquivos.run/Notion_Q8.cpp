#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double valorCarro;

    std::cout << "Digite o valor do carro: R$ ";
    if (!(std::cin >> valorCarro) || valorCarro <= 0) {
        std::cout << "Erro: Valor invalido para o carro.\n";
        return 1;
    }

    int parcelas[] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};
    double juros[] = {0.03, 0.06, 0.09, 0.12, 0.15, 0.18, 0.21, 0.24, 0.27, 0.30};

    std::cout << "\nTabela de Preços:\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "À vista (20% de desconto): R$ " << valorCarro * 0.80 << "\n";

    for (int i = 0; i < 10; i++) {
        std::cout << parcelas[i] << " parcelas (" << juros[i] * 100 << "% de acréscimo): R$ " 
                  << valorCarro * (1 + juros[i]) / parcelas[i] << " por parcela\n";
    }

    std::cout << "\n\nPagamento à vista ou parcelado: ";
    std::string escolha;
    std::cin >> escolha;

    if (escolha == "avista") {
        std::cout << "O valor final a ser pago é: R$ " << valorCarro * 0.80 << "\n";
    } 
    else if (escolha == "parcelado") {
        int numParcelas;
        std::cout << "Digite o número de parcelas (6, 12, 18, 24, 30, 36, 42, 48, 54 ou 60): ";
        
        //Evita que o programa quebre se o usuário digitar uma letra ou um número de parcelas inválido
        if (!(std::cin >> numParcelas)) {
            std::cout << "Erro: Digite apenas numeros.\n";
            return 1;
        }

        bool parcelaEncontrada = false;
        for (int i = 0; i < 10; i++) {
            if (numParcelas == parcelas[i]) {
                std::cout << "O valor final a ser pago é: R$ " << valorCarro * (1 + juros[i]) << "\n";
                std::cout << "O valor de cada parcela é: R$ " << valorCarro * (1 + juros[i]) / parcelas[i] << "\n";
                parcelaEncontrada = true;
                break;
            }
        }

        //Trata o caso do usuário digitar um número de parcelas que não existe na tabela
        if (!parcelaEncontrada) {
            std::cout << "Erro: Numero de parcelas nao disponivel na tabela.\n";
        }
    } 
    else {
        std::cout << "Erro: Opção invalida. Use apenas 'avista' ou 'parcelado'.\n";
    }

    return 0;
}