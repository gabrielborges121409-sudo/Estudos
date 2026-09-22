#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

int funcao(std::string sexo , int idade , float altura){
        std::cout << std::fixed << std::setprecision(2);
    float pesoIdeal;
    if(sexo == "Homem" || sexo == "homem"){
    pesoIdeal = (72.7 * altura) - 58;
        std::cout << "O peso ideal é: " << pesoIdeal << std::endl;
    }
    else if(sexo == "Mulher" || sexo == "mulher"){
    pesoIdeal = (62.1 * altura) - 44.7;
        std::cout << "O peso ideal é: " << pesoIdeal << std::endl;
    }
    else{std::cout << "Sexo inválido!" << std::endl;}
return pesoIdeal;
}
int main(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
    std::string sexo;
    int idade;
    float altura;
        std::cout << "Digite seu sexo(Homem/Mulher): ";
            std::cin >> sexo;
        std::cout << "Digite sua idade: ";
            std::cin >> idade;
        std::cout << "Digite sua altura: ";
            std::cin >> altura;
    funcao(sexo , idade, altura);
return 0;
}