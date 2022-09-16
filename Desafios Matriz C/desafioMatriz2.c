#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    int m[6][6]; 
    
    for(int i=0;i<6;i++){
        
        for(int j=0;j<6;j++){
            
            if(i==j || i<j){
                
                m[i][j] = 1;
 
            }else{
                
                m[i][j] = 0;
            
            }
            
            if((i+j)==0){
                
                m[i][j] = 5;
                
            }
            
            printf("%d " , m[i][j]);
            
        }
        
        printf("\n");
        
    }
    
  return 0;
}
