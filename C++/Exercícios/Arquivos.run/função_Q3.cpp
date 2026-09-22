#include <iostream>
#include <windows.h>

void funcao(int num1, int num2, bool multiplo){
    if(num1 % num2 == 0){
        std::cout << "O valor é: " << multiplo;
    }
    else{
    multiplo = false;
        std::cout << "O valor é: " << multiplo;
    }
}
int main(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
    int num1;
    int num2;
    bool multiplo = true;
        std::cout << "Digite o primeiro número: ";
            std::cin >> num1;
        std::cout << "Digite o segundo número: ";
            std::cin >> num2;
    funcao(num1 , num2 , multiplo);
return 0;
}