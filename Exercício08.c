/*
8. Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73.
*/

#include <stdio.h>
int main (){
    short x,quant;
    float media;
    for(x=13; x<74; x++){
        if(x % 2 == 0){
            media += x;
            quant++;
        }
    }
    printf("A média é %hd", media = media/x);
}