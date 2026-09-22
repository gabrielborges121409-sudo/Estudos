/*
Faça um algoritmo que receba um número.

Mostre uma mensagem caso este número seja maior
que 80, menor que 25 ou igual a 40.
*/

#include <iostream>

int main(){

int numero;

std::cout << "Digite um número: ";
std::cin >> numero;

if (numero > 80) {
    std::cout << "O número é maior que 80." << std::endl;
} else if (numero < 25) {
    std::cout << "O número é menor que 25." << std::endl;
} else if (numero == 40) {
    std::cout << "O número é igual a 40." << std::endl;
}

return 0;
}