#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int maior;
    int menor;
    
    printf("Digite um número inteiro: ");
    scanf("%d" , &num1);
    maior = num1;
    menor = num1;
    printf("Digite mais um número inteiro: ");
    scanf("%d" , &num2);
    printf("Digite mais mais um número inteiro: ");
    scanf("%d" , &num3);
    printf("Digite mais mais mais um número inteiro: ");
    scanf("%d" , &num4);
    printf("Digite mais mais mais mais um número inteiro: ");
    scanf("%d" , &num5);
    
    //Para o maior
    if (num1 > maior){
        maior = num1;
    }
    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){
        maior = num3;
    }
    if (num4 > maior){
        maior = num4;
    }
    if (num5 > maior){
        maior = num5;
    }
    
    //Para o menor
    if (num1 < menor){
        menor = num1;
    }
    if (num2 < menor){
        menor = num2;
    }
    if (num3 < menor){
        menor = num3;
    }
    if (num4 < menor){
        menor = num4;
    }
    if (num5 < menor){
        menor = num5;
    }
    
    printf("Maior: %d " , maior);
    printf("Menor: %d " , menor);

}