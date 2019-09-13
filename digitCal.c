#include <stdio.h>
#include <conio.h>
int digit(int num){

   
    int result=0,singleDigit;
    if(num < 9){
        return (num);
    }
    else{
        while(num!=0){

            singleDigit=num%10;
            result+=singleDigit;
            num=num/10;
        }
    }    
    if(result > 9){
        digit(result);
    }
    else{
        return result;
    }
    
}
int main(){
    
    int number;
    printf("Enter any integer number  :");
    scanf("%i",&number);
    int result=digit(number);
    printf("REsutl is :  %i",result);
    return 0;
}