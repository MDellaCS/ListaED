#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor = 0;
    float v = 0;
    int n100 = 0;
    int n50 = 0;
    int n10 = 0;
    int n5 = 0;
    int n1 = 0;
    
    printf("Digite um valor em R$");
    scanf("%f" , &v);
    valor = v;
    
    while((valor / 100) >= 1){
        valor = valor - 100;
        n100 = n100 + 1;
    }
    
    while((valor / 50) >= 1){
        valor = valor - 50;
        n50 = n50 + 1;
    }
    
    while((valor / 10) >= 1){
        valor = valor - 10;
        n10 = n10 + 1;
    }
    
    while((valor / 5) >= 1){
        valor = valor - 5;
        n5 = n5 + 1;
    }
    
    while((valor / 1) >= 1){
        valor = valor - 1;
        n1 = n1 + 1;
    }
    
    printf("O valor de R$ %f pode ser decomposto em: \n\n", v);
    printf("%d nota(s) de 100\n", n100);
    printf("%d nota(s) de 50\n", n50);
    printf("%d nota(s) de 10\n", n10);
    printf("%d nota(s) de 5\n", n5);
    printf("%d nota(s) de 1\n", n1);

}