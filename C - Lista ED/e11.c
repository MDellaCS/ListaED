#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor = 0;
    float taxa = 0;
    int ano = 0;
    
    printf("Digite o valor do carro na tabela: ");
    scanf("%f", &valor);
    printf("Digite o ano de fabricação do carro: ");
    scanf("%d" , &ano);
    
    if (ano >= 1990){
        taxa = valor * 0.015;
    } else{
        taxa = valor * 0.01;
    }
    
    printf("Imposto a ser pago: %f" , taxa);

}