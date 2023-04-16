/*
1. (WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. 
O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a 
zero.
*/

#include <stdio.h>
int main (){
    short n1,n2,n3, codigo; 
    while(1){
        printf("Informe o seu código: ");
        scanf("%hd", & codigo);
        if (codigo > 0){
            printf("Informe suas 3 notas"); 
            scanf("%hd %hd %hd", &n1, &n2, &n3);
            printf("A média das notas é: % hd", (n1+n2+n3)/3); 
        } else{
            printf("Código inválido");
            break;
        }
    }
}