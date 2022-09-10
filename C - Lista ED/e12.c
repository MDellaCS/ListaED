#include <stdio.h>
#include <stdlib.h>

int main(){

    float nsal = 0;
    float sal = 0;
    char carg;
    
    printf("Digite o salário de um(a) funcionário(a): ");
    scanf("%f", &sal);
    printf("Digite o cargo de um(a) funcionário(a): ");
    scanf("%s", &carg);
    
    if (carg == "Gerente"){
        nsal = sal * 1.1;
    } else if (carg == "Engenheiro"){
        nsal = sal * 1.2;
    } else if (carg = "Técnico"){
        nsal = sal * 1.3;
    } else{
        nsal = sal * 1.4;
    }
    
    printf("Salário antigo: %f" , sal);
    printf("Salário novo: %f" , nsal);
    printf("Diferença: %f" , nsal-sal);

}