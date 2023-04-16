/*
7. (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o 
salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.
*/

#include <stdio.h>
int main(){
    short quantfilho, npessoa, psalario, filho;
    float salario, masalario,mediasal,mediafilho,porcsal;
    while(1){
        printf("Informe seu salário e a quantidade de filhos: ");
        scanf("%hd %f", &salario, &quantfilho);
        if(salario < 0){
            break;
        } if(masalario < salario){
            masalario = salario;
        } if(salario <= 100){
            psalario++;
        } 
        mediasal += salario;
        mediafilho += filho; 
    }
    printf("A média salárial é: %f", mediasal = mediasal / npessoa);
    printf("A média de filhos é: %f", mediafilho = mediafilho / npessoa);
    printf("O maior salário é R$ %f", masalario);
    printf("O percentual é: %f", porcsal = (porcsal/(float (num pessoas)*100)));
}