/*
9. Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.
*/

#include <stdio.h>
int main(){
    short num, x;
    for(x=100; x<201; x++){
        if(x % 2 == 0){
            printf("%hd",x);
        }
    }
}