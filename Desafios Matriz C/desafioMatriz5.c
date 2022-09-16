#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    int m[10][10]; 
    
    for(int i=0;i<10;i++){
        
        for(int j=0;j<10;j++){
            
            if(j==3 && i>=1 && i<=8){
                
                m[i][j] = 1;
 
            }else{
                
                m[i][j] = 0;
            
            }
            
            printf("%d " , m[i][j]);
            
        }
        
        printf("\n");
        
    }
    
  return 0;
}
