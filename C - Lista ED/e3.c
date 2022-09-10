#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char sexo;
    
    printf("Digite o sexo de uma pessoa, M para Masculino ou F para Feminino: ");
    scanf("%s" , &sexo);
    
    if ((sexo == "M") || (sexo == "F") || (sexo == "m") || (sexo == "f")){
        printf("Sexo válido!");
    }else{
        printf("Sexo inválido!");
    }

}