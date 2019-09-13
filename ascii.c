#include <stdio.h>
#include <conio.h>
int main(){
    char ch=0;
    while(ch++<254){
        printf(" symbol =  %c ascii value  =  %d %c ",ch,ch,0x0A);
        //ch++;
    }
    return 0;
}