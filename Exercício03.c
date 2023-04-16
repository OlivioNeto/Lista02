/*
3. (DO WHILE) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos 
deles estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. 
A entrada de dados deve terminar quando for lido um número negativo.
*/

# include <stdio.h>
int main (){
    short n1,n2,n3,n4,x;
    do{
        printf("Digite um número: ");
        scanf("%hd", &x);
        if(x> 0 && x< 26){
            n1++;
        }if(x> 25 && x< 51){
            n2++;
        }if(x> 50 && x< 76){
            n3++;
        }if(x> 75 && x< 101){
            n4++;
        }
    } while(x>=0);
    printf("Quantidade de 0 a 25 %hd\n Quantidade de 26 a 50 %hd\n Quantidade de 51 a 75 %hd\n Quantidade de 76 a 100 %hd\n", n1,n2,n3,n4);
}