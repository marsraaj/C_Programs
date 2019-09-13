#include <stdio.h>
#include <conio.h>
int main(){
    int space;
    int max,i,j,k;
    printf("Enter max value which should less than 25 ");
    scanf("%i",&max);
    for(j=0;j<max;j++){
        for(k=0;k<max-j;k++){
            printf("%c ",65+k);
        }
        for(space=0;space<j;space++){
            printf("    ");
        }
        
        for(i=((max-1)-j);i>=0;i--){
            printf("%c ",65+i);
        }
        printf("\n");
    }
    return 0;
}