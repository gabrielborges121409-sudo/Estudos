#include <iostream>
#include <windows.h>

int funcao(int numero , bool par){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
    if(numero % 2 == 0){
        std::cout << "o valor é: " << par;    
        }
    else{
    par = false;
        std::cout << "o valor é:" << par;
    }    
}
int main(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
    bool par = true;    
    int numero;
        std::cout << "Digite um número: ";
            std::cin >> numero;         
    funcao(numero , par);
return 0;
}