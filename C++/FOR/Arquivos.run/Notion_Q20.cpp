/*
Uma sequência 
de 50 números será informada pelo usuário.
Escreva um programa que conte quantos desses
 números são múltiplos de 3 e exiba a soma de todos os números pares.
*/

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int numero;
    int contadorMultiplos3 = 0;
    int somaPares = 0;

    for (int i = 0; i < 50; ++i) {
        
        std::cout << "Digite o " << (i + 1) << "º número: ";
        std::cin >> numero;

        if (numero % 3 == 0) {
            contadorMultiplos3++;
        }

        if (numero % 2 == 0) {
            somaPares += numero;
        }
    }

    std::cout << "Quantidade de múltiplos de 3: " << contadorMultiplos3 << std::endl;
    std::cout << "Soma de todos os números pares: " << somaPares << std::endl;

    return 0;
}