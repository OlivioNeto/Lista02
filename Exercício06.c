/*
6. (FOR) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva 
aqueles que dividido por 11 dão resto igual a 5.
*/

#include <stdio.h>
int main (){
    short x; 
    for(x=0; x<2000; x++){
        printf("%hd", x);
    }
    for(x=0; x<2000; x++){
        if(x % 11 == 5){
            printf("%hd",x);
        }
    }

}