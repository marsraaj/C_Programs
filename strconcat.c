#include <conio.h>
#include <stdio.h>
void xstrcmp(char *p,const char *q){

    int isTrue=1;
    while(isTrue){

        if(*p=='\0'){

            while(isTrue){
                
                *p=*q;
                p++;
                q++;
                if(*q=='\0'){
                    isTrue=0;
                    continue;
                }
            }
        }
        p++;
    }
   *p='\0';
}
int main(){
    char first[30];
    char second[30];

    printf("Enter any String ..   :    ");
    //fgets(first,30,stdin);
     scanf("%s",first);
    printf("Enter any String ..   :    ");
    scanf("%s",second);
    xstrcmp(first,second);

    printf("Resultant String is : %s",first);
    return 0;

}