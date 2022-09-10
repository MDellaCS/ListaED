#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome;
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Digite o nome do(a) aluno(a): ");
    scanf("%s" , &nome);
    
    printf("Digite a primeira nota do(a) aluno(a): ");
    scanf("%f" , &nota1);

    printf("Digite a segunda nota do(a) aluno(a): ");
    scanf("%f" , &nota2);

    printf("Digite a terceira nota do(a) aluno(a): ");
    scanf("%f" , &nota3);

    media = (nota1+nota2+nota3)/3;

    if (media >= 7){
        printf("Aprovado(a)");
    }else if (media <= 4){
        printf("Reprovado(a)");
    }else if(media > 4 && media < 7){
        printf("Recuperação");
    }

}