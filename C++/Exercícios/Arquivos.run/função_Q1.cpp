#include <iostream>

int tabuada(int numero , int i){
	
	int resultado;	
	for(i = 0; i <= 10; i++){
		resultado = numero * i;	
		std::cout << numero << " X " << i << " = " << resultado << std::endl;
	}
return resultado;	
}
int main(){
	
	int numero;
	int i;
		std::cout << "Digite um numero para tabuada: ";
			std::cin >> numero;
	tabuada(numero , i);
return 0;
}