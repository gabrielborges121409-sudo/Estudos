#include <iostream>
#include <windows.h>

int funcao(int numero){
    int resultado;
    for(int i = numero; i >= 1; i--){
    resultado = numero * i;
        std::cout << numero << " X " << i << " = " << resultado << std::endl;
    }
return resultado;
}
int main(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
    int numero;
        std::cout << "Digite um número: ";
            std::cin >> numero;
    funcao(numero);
return 0;
}