#include <stdio.h>
int stringCompare(char *firstString, char *secondString){

    while(*firstString !='\0'){
        if(*firstString!=*secondString){
             return 1;
        }
        firstString++;
        secondString++;
    }
    return 0;
}
int main(){

    char source[20];
    char dest[20];

    printf("Enter any String ..   :    ");
    fgets(source,20,stdin);
    printf("Enter any String ..   :    ");
    fgets(dest,20,stdin);
    int result=stringCompare(dest,source);

    if(result == 0){
        printf("\n strings are equal ");
    }
    else{
        printf("\n strings are not equal");
    }
    //printf("\n Source fileString is : %s \n Copief fileString is : %s",source,dest);
    return 0;
}

