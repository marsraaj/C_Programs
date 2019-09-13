#include <stdio.h>
void converfahrenhaitToTemp(int fahrenhait,int *celsius){
    *celsius=((fahrenhait-32)/1.8);
    printf("Temperaturn in celsius :   %d",*celsius);
}
int main(){
    int tempInfahrenheit,celsius;
    celsius=-1;
    printf("Enter temperature in fahrehait :  ");
    scanf("%d",&tempInfahrenheit);
    converfahrenhaitToTemp(tempInfahrenheit,&celsius);
    printf("Temperaturn in celsius :   %d",celsius);
    return 0;
}