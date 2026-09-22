/*
Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a 
cada um deles anunciando um bônus especial.

Escreva um algoritmo que leia o nome do cliente e o valor das suas 
compras no ano passado e calcule um bônus de 10% se 
o valor das compras for menor que 500.000 e de 15 %, caso contrário.
*/

#include <iostream>
#include <string>
#include <limits>
#include <windows.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	std::string nome;
	double compras = 0.0;

	for (int i = 0; i < 150; ++i){

		std::cout << "Digite o nome do cliente: ";
		std::getline(std::cin, nome);
		if (nome.empty()) { // se houver um newline pendente
			std::getline(std::cin, nome);
		}

		std::cout << "Digite o valor das compras no ano passado: ";
		std::cin >> compras;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // limpar o buffer de entrada

		double bonus = (compras < 500000.0) ? compras * 0.10 : compras * 0.15;

		std::cout << "Cliente: " << nome << " - Bonus: " << bonus << std::endl;
	}

	return 0;
}