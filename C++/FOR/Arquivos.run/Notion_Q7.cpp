#include <iostream>
#include <iomanip>

int main() {
    int pessoas = 0;
    int totalPessoas = 0;
    int audiencia4 = 0;
    int audiencia5 = 0;
    int audiencia7 = 0;
    int audiencia12 = 0;
    int canal;

    std::cout << "--- Pesquisa de Audiencia de TV ---\n";
    std::cout << "Canais disponiveis: 4, 5, 7 e 12.\n";
    std::cout << "Digite 0 no canal para encerrar o programa.\n";

    for (;;) {
        std::cout << "\nCanal: ";
        if (!(std::cin >> canal) || canal == 0) {
            break; 
        }

        if (canal != 4 && canal != 5 && canal != 7 && canal != 12) {
            std::cout << "Erro: Canal invalido! Tente novamente.\n";
            continue; // Pula o resto do código e volta para o início do laço
        }

        std::cout << "Pessoas: ";
        if (!(std::cin >> pessoas)) {
            break; 
        }

        if (pessoas < 0) {
            std::cout << "Erro: O numero de pessoas nao pode ser negativo.\n";
            continue;
        }

        switch (canal) {
            case 4:  audiencia4 += pessoas; break;
            case 5:  audiencia5 += pessoas; break;
            case 7:  audiencia7 += pessoas; break;
            case 12: audiencia12 += pessoas; break;
        }
        
        totalPessoas += pessoas;
    }

    std::cout << "\n--- Resultados da Audiencia ---\n";
    
    if (totalPessoas == 0) {
        std::cout << "Nenhuma audiencia registrada." << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Canal 4:  " << (audiencia4 * 100.0 / totalPessoas) << "%" << std::endl;
        std::cout << "Canal 5:  " << (audiencia5 * 100.0 / totalPessoas) << "%" << std::endl;
        std::cout << "Canal 7:  " << (audiencia7 * 100.0 / totalPessoas) << "%" << std::endl;
        std::cout << "Canal 12: " << (audiencia12 * 100.0 / totalPessoas) << "%" << std::endl;
    }

    return 0;
}