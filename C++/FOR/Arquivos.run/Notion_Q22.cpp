/*
Entrada contínua de temperaturas.

Regras: 

Ignorar valores < -50 ou > 150; 

Encerrar com 999;

Contar apenas temperaturas entre 20 e 80, múltiplas de 5 e que não sejam divisíveis por 10.

Exibir: 

Quantidade válida;

Maior temperatura válida;

Porcentual válido sobre total digitado.
*/

#include <iostream>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001); 
        SetConsoleCP(65001);

    int temperatura;
    int total = 0;
    int validas = 0;
    int maior = -51;

    for(;;){
        std::cout << "Digite a temperatura (999 para encerrar): ";
        std::cin >> temperatura;

        if (temperatura == 999){ break; }
        

        if (temperatura < -50 || temperatura > 150){ continue; }
        
        total++;

        if (temperatura >= 20 && temperatura <= 80 && temperatura % 5 == 0 && temperatura % 10 != 0){
            validas++;
            if (temperatura > maior) maior = temperatura;
        }
    }


    std::cout << "Quantidade de temperaturas válidas: " << validas << std::endl;
    if (validas > 0){
        std::cout << "Maior temperatura válida: " << maior << std::endl;
        std::cout << "Porcentual de válidas sobre total digitado: " << (validas * 100.0 / total) << "%" << std::endl;
    } else {
        std::cout << "Nenhuma temperatura válida foi digitada." << std::endl;
    }



    return 0;
}