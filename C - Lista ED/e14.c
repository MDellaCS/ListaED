#include <stdio.h>
#include <stdlib.h>

int main(){

    int numPedido = 0;
    float precoPedido = 0;
    char txtPedido;
    
    printf("O que você deseja?\n");
    printf("1 - Cachorro Quente | R$ 1,10");
    printf("2 - Bauru Simples   | R$ 1,30");
    printf("3 - Bauru c/Ovo     | R$ 1,50");
    printf("4 - Hamburger       | R$ 1,10");
    printf("5 - Cheeseburger    | R$ 1,30");
    printf("6 - Refrigerante    | R$ 1,00");
    printf("9 - Fechar");
    numPedido = 0;
    
    while (numPedido != 9){
        scanf("%d", &numPedido);
        switch(numPedido){
            case 1:
                txtPedido = txtPedido + "Cachorro Quente ";
                precoPedido = precoPedido + 1.10;
                break;
            caso 2:
                txtPedido = txtPedido + "Bauru Simples "
                precoPedido = precoPedido + 1.30
                break;
            case 3:
                txtPedido = txtPedido + "Bauru c/Ovo "
                precoPedido = precoPedido + 1.50
                break;
            case 4:
                txtPedido = txtPedido + "Hamburguer "
                precoPedido = precoPedido + 1.10
                break;
            case 5:
                txtPedido = txtPedido + "Cheeseburguer "
                precoPedido = precoPedido + 1.30
                break;
            case 6:
                txtPedido = txtPedido + "Refrigerante "
                precoPedido = precoPedido + 1.00
                break;
            case 9:
                break;
            default:
                printf("Opção Inválida!");
                break;
        }
    }
    
    printf("Você pediu: ");
    printf("%s", txtPedido);
    printf("Vai lhe custar: R$ %f" , precoPedido);

}