/*
Faça uma função que conte números pares

Faça uma função que conte números ímpares

Faça uma função que calcule a soma dos pares

O programa deve exibir todas as análises.
*/

#include <iostream>

int contPares(int numero){
    int contadorPares = 0;
        if(numero % 2 == 0){
return 1;
    }
return 0;
}

int contImpares(int numero){
        if(numero % 2 == 1){
return 1;
        }
return 0;
}

int soma(int numero){
    int somando = 0;
        if(numero % 2 == 0){
    somando += numero;
        }
return somando;
}

int main(){
    int numero;
    int totalPares = 0;
    int totalImpares = 0;
    int somaPares = 0;
        for(int i = 0; i < 20; i++){
            std::cout << "Digite um numero: ";
                std::cin >> numero;
    totalPares += contPares(numero);
    totalImpares += contImpares(numero);
    somaPares += soma(numero);   
}
            std::cout << "Numeros pares: " << totalPares << "\n";
            std::cout << "Numeros impares: " << totalImpares << "\n";
            std::cout << "Soma dos numero pares: " << somaPares << std::endl;
return 0;
}