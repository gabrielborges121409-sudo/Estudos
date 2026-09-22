#include <stdio.h>
#include <windows.h>

int frase(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
        printf("Olá, estou falando na função frase!");
}
int main(){
        SetConsoleOutputCP(CP_UTF8);
            SetConsoleCP(CP_UTF8);
        printf("Olá, estou falando pela função main!\n");
    frase();
return 0;
}