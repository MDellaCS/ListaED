#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int dif;
    
    printf("Digite um número inteiro: ");
    scanf("%d" , &num1);
    
    printf("Digite mais um número inteiro: ");
    scanf("%d" , &num2);
    
    if(num1 > num2){
        dif = num1 - num2;    
    } else{
        dif = num2 - num1; 
    }
    
    printf("O maior menos o menor: %d" , dif);

}