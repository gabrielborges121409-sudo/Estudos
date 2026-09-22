/*
Uma loja utiliza o código 1 para transação à vista e 2 para transação a prazo. 

Faça um programa que receba o código e o valor de 15 transações.

Calcule e mostre: 

O valor total das compras à vista; 

O valor total as compras a prazo; 

O valor total das compras efetuadas; 

O valor da primeira prestação das compras a prazo, sabendo se que essas serão pagas em três vezes.
*/

#include <iostream>

int main() {
    int codigo;
    double valor;
    double totalVista = 0.0;
    double totalPrazo = 0.0;

    for (int i = 0; i < 15; ++i) {
        std::cout << "Digite o código da transação (1 para à vista, 2 para a prazo): ";
        std::cin >> codigo;
        std::cout << "Digite o valor da transação: ";
        std::cin >> valor;

        if (codigo == 1) {
            totalVista += valor;
        } else if (codigo == 2) {
            totalPrazo += valor;
        }
    }

    std::cout << "Valor total das compras à vista: " << totalVista << std::endl;
    std::cout << "Valor total das compras a prazo: " << totalPrazo << std::endl;
    std::cout << "Valor total das compras efetuadas: " << (totalVista + totalPrazo) << std::endl;
    std::cout << "Valor da primeira prestação das compras a prazo: " << (totalPrazo / 3) << std::endl;

    return 0;
    }