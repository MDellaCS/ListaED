#include <stdio.h>
#include <stdlib.h>

int main(){

    float cred = 0;
    float salmed = 0;
    
    printf("Digite o saldo médio de um(a) clinte: ");
    scanf("%f", &salmed);
    
    if (salmed <= 200){
        cred = salmed * 0.0;
    } else if ((salmed > 200) && (salmed <= 400)){
        cred = salmed * 0.2;
    } else if ((salmed > 400) && (salmed <= 600)){
        cred = salmed * 0.3;
    } else if (salmed > 600){
        cred = salmed * 0.4;
    }
    
    printf("Saldo médio: %f\n" , salmed);
    printf("Crédito: %f" , cred);

}