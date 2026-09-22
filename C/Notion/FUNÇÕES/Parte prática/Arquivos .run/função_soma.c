#include <stdio.h>
#include <windows.h>

int soma(int numero , int somar){
    SetConsoleOutputCP(CP_UTF8);
	    SetConsoleCP(CP_UTF8);

    int somando;
    somando = numero + somar;

        printf("Somando números...\n");
        printf("Agora seu número somado é: %d\n" , somando);

        return somando;
}
int main(){
    SetConsoleOutputCP(CP_UTF8);
	    SetConsoleCP(CP_UTF8);

    int numero;
    int somar;

        printf("Digite um número: ");
            scanf("%d" , &numero);
        printf("\nDigite um número para soma: ");
            scanf("%d" , &somar);

        soma(numero , somar);
}
