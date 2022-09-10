#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    
    printf("Digite um número inteiro: ");
    scanf("%d" , &num1);
    
    printf("Digite mais um número inteiro: ");
    scanf("%d" , &num2);
    
    if (num1 > num2){
        printf("%d é o maior", num1);
    }else if (num2 > num1){
        printf("%d é o maior", num2);
    }else {
        printf("São iguais");
    }

}