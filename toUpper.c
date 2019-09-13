#include <stdio.h>
void toUpper(char *ptr){

    int result;
    while(*ptr !='\0'){
        result=(int ) *ptr;
        if((result >=65 && result <=90)|| (result >=97 && result <=122)){
            if(result >=97 && result <=122){
                result-=32;
                *ptr=(char) result;
            }
        }
        ptr++;
    }
}
int main(){
    
    char str[30];
    printf("Enter any string ..   :     ");
    fgets(str,30,stdin);
    toUpper(str);

    printf("String is in lower case :  %s",str);
    return 0;
}