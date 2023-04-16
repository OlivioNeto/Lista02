/*
10. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo 
[10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.
*/

#include <stdio.h>
int main (){
    short x, c1, c2, num;
    for(x=1; x<11; x++){
        printf("Informe 10 valores");
        scanf("%hd", & num);
        if( num > 9 && num < 21){
            c1++;
        } else{
            c2++;
        }
    }
    printf("Os números que estão dentro do intervalo são: %hd\n e os que não estão: %hd", c1, c2);
}