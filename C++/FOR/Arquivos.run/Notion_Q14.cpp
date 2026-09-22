/*
A porcentagem de pessoas que respondeu bom entre todos os espectadores analisados.
*/

#include <iostream>
#include <windows.h>
#include <iomanip>

int main(){
     SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

int idade;
int opiniao;
double somaIdades = 0;
float mediaIdadesOtimo = 0;
int contadorRegular = 0;
int contadorBom = 0;
int porcentagemBom = 0;

for(int i = 0; i < 15; i++){
    std::cout << "Digite su idade: ";
    std::cin >> idade;

    std::cout << "\nDigite sua opiniao sobre o filme (3-ótimo, 2-bom, 1-regular): ";
    std::cin >> opiniao;
    std::cin.ignore(); 

    somaIdades += idade;
    mediaIdadesOtimo = somaIdades / 15;


    if(opiniao == 1){
        contadorRegular++;
    }
    else if(opiniao == 2){
        contadorBom++;
    }

    porcentagemBom = (contadorBom * 100) / 15;

}

std::cout << "\nA media das idades das pessoas que responderam ótimo é: " << std::fixed << std::setprecision(2) << mediaIdadesOtimo;
std::cout << "\nA porcentagem de pessoas que responderam bom entre todos os espectadores analisados é: " << porcentagemBom << "%";
std::cout << "\nA quantidade de pessoas que responderam regular é: " << contadorRegular;   

return 0;
}