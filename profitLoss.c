#include <stdio.h>
#include <conio.h>
//#define max=100
int profit1(int purches,int profit){
    int res=(100*profit)/purches;
    return res;
}
int loss1(int purches, int loss){
    int res=(100*(-(loss)))/purches;
    return res;
}
int main(){
    int purches,profit,loss,sale,amount=0,result=0;
    printf("Enter purches amount of equipment  : ");
    scanf("%d",&purches);
    printf("Enter sale amout :  ");
    scanf("%d",&sale);
    amount=sale-purches;
    printf("amount is   %d",amount);
    printf("");
    if(amount>=0){
        result=profit1(purches,amount);
        printf("profit is  %d ",result);
    }
    else{
        result=loss1(purches,amount);
        printf("Loss is %d ",result);
    }
    
    return 0;
}