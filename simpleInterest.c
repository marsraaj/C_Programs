#include<stdio.h>
#include<conio.h>
int simpleInterest,rate,time,principleAmount,totalAmount;
void simpleInterestAmount(){
    printf("Enter principle Amount :  ");
    scanf("%i",&principleAmount);
    printf("Ente Interest rate :  ");
    scanf("%i",&rate);
    printf("Enter duration in year :  ");
    scanf("%i",&time);

    simpleInterest=(principleAmount*time*rate)/100;
    printf("simple Interest is  :  %i\n",simpleInterest);
    printf("total Amount    is  :  %i\n",simpleInterest+principleAmount);
}
void findRate(){
    printf("Enter principle Amount :  ");
    scanf("%i",&principleAmount);
    printf("Enter duration in year :  ");
    scanf("%i",&time);
    printf("Enter simple Interest  :  ");
    scanf("%i",&simpleInterest);

    time = (simpleInterest*100)/(principleAmount*rate);
    printf("Time is in years is  :  %i\n ",time);
}
void TotolTime(){

}
void principleAmountFind(){

}
void totalAmountFind(){

}
int main(){
    
    int choice;
    do{
        printf("what do you want to calculate \n 1: simpleInterest \n 2: Rate \n 3: princimpleAmount \n 4: principleAmount \n 5: totalAmount \n 6: press '0' to exit");        scanf("%i",&choice);
        switch(choice){
            case 1:
                simpleInterestAmount();
            break;

            case 2:
                findRate();
                break;

            case 3:
                TotolTime();
                break;

            case 4:
                principleAmountFind();
                break;
            
            case 5:
                totalAmountFind();
                break;
            
            case 0:
                printf("program exiting.............................!");
                break;

            default :
                printf("wrong choice");
        }
    }while (choice!=0);
    return 0;    
}