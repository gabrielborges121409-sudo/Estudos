#include <iostream>
#include <windows.h>

int soma(int numero , int somar){
    SetConsoleOutputCP(CP_UTF8);
	    SetConsoleCP(CP_UTF8);

    int somando;
    somando = numero + somar;

    std::cout << "Agora seu número somado é: " << somando;
        return somando;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);

    int numero;
    int somar;
    

    std::cout << "Digite um número para somar: ";
        std::cin >> numero;
    std::cout << "E você quer somar ele por quanto?\nR: ";
        std::cin >> somar;

    soma(numero , somar);

    return 0;
}