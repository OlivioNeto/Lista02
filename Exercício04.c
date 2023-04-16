/*
4. (FOR) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, 
sexo (M/F) e salário. Faça um algoritmo que informe de 15 pessoas:
a) a média de salário do grupo;

b) maior e menor idade do grupo;

c) quantidade de mulheres com salário até R$100,00.
*/

#include <stdio.h>
int main(){
    short idade, midade, maidade, sexo, x, quant;
    float salario, media;

    for(x=1; x<16; x++){
        printf("Informe sua idade seu sexo (1 para feminino e 2 para masculino): ");
        scanf("%hd %f %hd", & idade, & salario, & sexo);

        if( midade > idade){
            midade = idade; 
        } if (maidade < idade){
            maidade = idade;
        } if (sexo == 1 && salario < 100){
            quant++;
        }
    }
    printf("A média dos salários é R$ %f", media = salario / 16);
    printf("A maior idade é: %hd \n a Menor idade é %hd", maidade, midade);
    printf("A quaatidade de mulheres que recebem menos de R$100 é: %hd", quant);
}