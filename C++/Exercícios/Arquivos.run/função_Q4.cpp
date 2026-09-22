#include <iostream>
#include <windows.h>

void funcao(int numero){
    switch(numero){
        case 1:
            std::cout << "O mês é Janeiro.";
                break;
        case 2:
            std::cout << "O mês é Fevereiro.";
                break;
        case 3:
            std::cout << "O mês é Março.";
                break;
        case 4:
            std::cout << "O mês é Abril.";
                break;
        case 5:
            std::cout << "O mês é Maio.";
                break;
        case 6:
            std::cout << "O mês é Junho.";
                break;
        case 7:
            std::cout << "O mês é Julho.";
                break;
        case 8:
            std::cout << "O mês é Agosto.";
                break;
        case 9:
            std::cout << "O mês é Setembro.";
                break;
        case 10:
            std::cout << "O mês é Outubro.";
                break;
        case 11:
            std::cout << "O mês é Novembro.";
                break;
        case 12:
            std::cout << "O mês é Dezembro.";
                break;
        default:
            std::cout << "Inválido.";
                break;
    }
}
int main(){
    int numero;
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
        std::cout << "Digite um número referente ao mês: ";
            std::cin >> numero;
    funcao(numero);
return 0;
}