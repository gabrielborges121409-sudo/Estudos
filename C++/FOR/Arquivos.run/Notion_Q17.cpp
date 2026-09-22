/*
Uma empresa utiliza os códigos 1 para funcionários do setor administrativo e 2 para os funcionários
 do setor operacional. 

Faça um programa que receba o código e o salário de 20 funcionários.

Calcule e mostre: 

A média salarial do setor administrativo;

A média salarial do setor operacional;

O total de salários pagos pela empresa;

A quantidade de funcionários em cada setor;
*/

#include <iostream>
#include <iomanip>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int codigo;
    float salario;
    int contadorAdministrativo = 0;
    int contadorOperacional = 0;
    float somaSalariosAdministrativo = 0.0;
    float somaSalariosOperacional = 0.0;
    float mediaSalariosAdministrativo = 0.0;
    float mediaSalariosOperacional = 0.0;
    float totalSalarios = 0.0;

std::cout << std::fixed << std::setprecision(2);

for(int i = 1; i <= 20; i++){
    std::cout << "Digite o código do funcionário " << i << ": ";
    std::cin >> codigo;

    if(codigo != 1 && codigo != 2) {
        std::cout << "Código inválido. Digite 1 para administrativo ou 2 para operacional." << std::endl;
        i--; // Decrementa o contador para repetir a entrada do funcionário
        continue;
    } else if(codigo == 1) {
        std::cout << "Digite o salário do funcionário " << i << ": ";
        std::cin >> salario;
        somaSalariosAdministrativo += salario;
        contadorAdministrativo++;
    } else if(codigo == 2) {
        std::cout << "Digite o salário do funcionário " << i << ": ";
        std::cin >> salario;
        somaSalariosOperacional += salario;
        contadorOperacional++;

        mediaSalariosOperacional = somaSalariosOperacional / contadorOperacional;
        mediaSalariosAdministrativo = somaSalariosAdministrativo / contadorAdministrativo;
        totalSalarios = somaSalariosAdministrativo + somaSalariosOperacional;

    }

    std::cout << "\nMédia salarial do setor administrativo: R$ " << mediaSalariosAdministrativo << std::endl;
    std::cout << "Média salarial do setor operacional: R$ " << mediaSalariosOperacional << std::endl;
    std::cout << "Total de salários pagos pela empresa: R$ " << totalSalarios << std::endl;
    std::cout << "Quantidade de funcionários no setor administrativo: " << contadorAdministrativo << std::endl;
    std::cout << "Quantidade de funcionários no setor operacional: " << contadorOperacional << std::endl;

    return 0;
}