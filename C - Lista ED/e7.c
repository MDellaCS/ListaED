#include <stdio.h>
#include <stdlib.h>

int main(){

    float horas;
    float salario;
    int nivel;
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f" , &horas);
    printf("Digite o nível do(a) professor(a) | 1, 2 ou 3: ");
    scanf("%d" , &nivel);
    
    switch (nivel){
        case 1:
            salario = horas * 12;
            printf("O salário desse(a) professor(a) é: %f", salario);
            break;
        case 2:
            salario = horas * 20.31;
            printf("O salário desse(a) professor(a) é: %f", salario);
            break;
        case 3:
            salario = horas * 37.81;
            printf("O salário desse(a) professor(a) é: %f", salario);
            break;
        default:
            printf("Nível inválido");
            break;
    }

}