#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
    printf("Digite um número: ");
    scanf("%d" , &num);
    
    num = num % 2;
    
    if (num == 0){
        printf("Este número é par ");
    } else{
        printf("Este número é ímpar ");
    }
    
    if (num < 0){
        printf("e negativo");
    } else{
        printf("e positivo");
    }

}