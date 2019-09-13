#include <stdio.h>
int main(){
    int firstNumber,SecondNumber;
    int *ptr= &SecondNumber;
    printf("Enter values for first and second number   : ");
    scanf("%d%d", &firstNumber,ptr);
    int result= calcualteGCG(firstNumber,SecondNumber);
    int lcd = (firstNumber* SecondNumber)/ result;

    printf("gcd of given two number is      :  %d ",result);

    printf("lcd of given two number is      :  %d ",lcd);
    return 0;
}
int calcualteGCG(int first, int second){
    if(first < second){
        first =first + second;
        second =first - second;
        first = first -second;
    }
    while (first != second){

        if(first > second){
            first = first - second;
        }
        else {
            second =  second - first;
        }
    }
    return first;
}