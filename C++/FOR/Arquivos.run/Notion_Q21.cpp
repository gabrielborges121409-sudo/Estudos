/*
Duas populações A e B crescem anualmente: 

A cresce 3% ao ano e B cresce 1,5% ao ano. 

A cada 5 anos ocorre uma crise que reduz ambas em 7%.

Determine em quantos anos A ultrapassa B, considerando valores iniciais informados pelo usuário.
*/

#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); 
        SetConsoleCP(65001); 
        
    double A, B;
    int anos = 0;

    std::cout << "Digite a população inicial de A: ";
    std::cin >> A;
    std::cout << "Digite a população inicial de B: ";
    std::cin >> B;

    for(; A <= B; anos++) {
        A += A * 0.03; 
        B += B * 0.015; 

        if (anos % 5 == 0){ 
            A -= A * 0.07;
            B -= B * 0.07; 
        }
    }
    std::cout << "A população de A ultrapassará a população de B em " << anos << " anos." << std::endl;

    return 0;
}