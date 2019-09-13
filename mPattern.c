#include <stdio.h>

void printMpattern(int row , int column){
    int space=column-2;
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        for(k=0;k<space; k++){
            printf("  ");
        }

        for(int l=0; l<=i;l++){
            printf("* ");
        }
        printf("\n");
        space-=2;
    }
}
int main(){
    int row,column;
    printf ("Enter row and column size :  ");
    scanf("%i%i",&row,&column);
    printMpattern(row,column);
    return 0;
}