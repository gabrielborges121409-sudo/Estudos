#include <iostream>
#include <string>
#include <windows.h>

std::string frase(){
    SetConsoleOutputCP(CP_UTF8);
	    SetConsoleCP(CP_UTF8);
    std::cout << "Olá, estou falando pela função frase!";
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
	    SetConsoleCP(CP_UTF8);
    std::cout << "Olá,estou falando pela função main!" << std::endl;
    frase();
    return 0;
}