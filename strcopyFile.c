#include <stdio.h>
void strCopy(char *dest, const char *source){

    while(*source !='\0'){
        *dest=*source;
        dest++;
        source++;
    }
    *dest='\0';

}

int main(){

    char source[20];
    char dest[20];

    printf("Enter any String ..   :    ");
    fgets(source,20,stdin);
    strCopy(dest,source);

    printf("\n Source String is : %s \n Copied String is : %s",source,dest);
    return 0;
}