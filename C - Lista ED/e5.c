#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
    
    printf("Digite a primeira nota de um(a) aluno(a): ");
    scanf("%f" , &nota1);
    printf("Digite a segunda nota de um(a) aluno(a): ");
    scanf("%f" , &nota2);
    printf("Digite a terceira nota de um(a) aluno(a): ");
    scanf("%f" , &nota3);
    printf("Digite a quarta nota de um(a) aluno(a): ");
    scanf("%f" , &nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    
    if(media >= 6){
        printf("Aprovado(a)"); 
    } else{
        printf("Reprovado(a)");  
    }

}