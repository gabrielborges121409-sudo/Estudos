/*
Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral
 do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/

#include <iostream>
#include <iomanip>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


int codigo;
int quantidade;
float precoFinal;
float totalGeral = 0.0;

std::cout << "Cardápio da Lanchonete:\n";
std::cout << "100 - Cachorro Quente - R$ 1,20\n";
std::cout << "101 - Bauru Simples - R$ 1,30\n";
std::cout << "102 - Bauru com ovo - R$ 1,50\n";
std::cout << "103 - Hambúrguer - R$ 1,20\n";   
std::cout << "104 - Cheeseburguer - R$ 1,30\n";
std::cout << "105 - Refrigerante - R$ 1,00\n"; 

for(;;) {

std::cout << "Digite o código do item desejado (ou 0 para encerrar): ";
std::cin >> codigo;

if(codigo == 0) {
    break;
}

if(codigo < 100 || codigo > 105) {
    std::cout << "Código inválido. Tente novamente.\n";
    continue;
}

if(codigo == 100 || codigo == 101 || codigo == 102 || codigo == 103 || codigo == 104 || codigo == 105) {
    std::cout << "Digite a quantidade desejada: ";
    std::cin >> quantidade;

    if(quantidade <= 0) {
        std::cout << "Quantidade inválida. Tente novamente ou > 0 < para encerrar.\n";
        continue;
    }

    switch(codigo) {
        case 100:
            precoFinal = quantidade * 1.20;
            break;
        case 101:
            precoFinal = quantidade * 1.30;
            break;
        case 102:
            precoFinal = quantidade * 1.50;
            break;
        case 103:
            precoFinal = quantidade * 1.20;
            break;
        case 104:
            precoFinal = quantidade * 1.30;
            break;
        case 105:
            precoFinal = quantidade * 1.00;
            break;
    }//SWITCH   

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Valor a ser pago pelo item: R$ " << precoFinal << "\n";
    totalGeral += precoFinal;
}//IF
    

}//FOR

std::cout << "Total geral do pedido: R$ " << totalGeral << "\n";

return 0;
}//MAIN