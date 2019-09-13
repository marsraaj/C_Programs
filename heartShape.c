#include <stdio.h>

int main(){
    int row=6;
    int columun=7;
    int i,j;
    for(i=0;i<row; i++){
        for(j=0;j<columun; j++){
            if(i==0 && j%3!=0){// ||  || (i-j==2) ||(i+j==8)){
                printf("*  ");
            }
            else if( i==1 && j%3==0){    
                printf("*  ");
            }
            else if(i-j==2){
                printf("*  ");
            }
            else if(i+j==8){
                printf("*  ");
            }
            else{
                printf("   ");
            }
                 
            
        }
        printf("\n");
    }
    return 0;
}