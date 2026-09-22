/*
Ler 80 números.

Ao final informar quantos número(s) est(á)ão no intervalo 
entre 10 (inclusive) e 150 (inclusive).
*/

#include <iostream>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     int num;
     int count = 0;

for(int i = 0; i < 80; i++){
   
    std::cout << "Digite um número: ";
    std::cin >> num;
    if(num >= 10 && num <= 150){
        std::cout << "Número " << num << " está no intervalo entre 10 e 150." << std::endl;
        count++;
    }
    std::cout << "Quantidade de numeros no intervalo [10,150]: " << count << std::endl;
}
    return 0;

}
