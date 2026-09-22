/*Criar um programa que leia o nome completo de um cliente (string), valide se o campo não está vazio,
exiba o nome em letras maiúsculas como confirmação, e gere automaticamente um login utilizando as
três primeiras letras do nome combinadas com um número (por exemplo, as 3 primeiras letras + "01").
*/

#include <stdio.h>
#include <ctype.h> // Necessário para a função toupper()
#include <string.h> // Necessário para strlen()

int main(){

//string cliente
char nome[100];
//variavel para login
char login[5];

printf("Digite seu nome: ");
scanf("%s" , &nome);

//verificar se o campo está vazio
if (strlen(nome) < 2) {
        printf("Minimo 2 caracteres");
    }
   
//transformar letras minúsculas em maiúsculas
for (int i = 0; nome[i] != '\0'; i++){
nome[i] = toupper(nome[i]);
}

printf("Ola %s." , nome);

//login
login[0] = nome[0];
login[1] = nome[1];
login[2] = nome[2];
login[3] = '0';
login[4] = '1';

printf("\nSeu login e: %s" , login);

return 0;
}//algum erro ainda