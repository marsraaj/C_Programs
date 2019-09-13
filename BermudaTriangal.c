#include"stdio.h"
#include"stdlib.h"
#include"string.h"
void go_south(int *lat,int *lon,int movement)
{
    *lat = *lat-movement;
    *lon = *lon+movement;
    printf("current position is : [%i , %i]",*lat,*lon);
}

void go_north(int *lat,int *lon, int movement)
{
    *lat = *lat+movement;
    *lon = *lon-movement;
    printf("current position is : [%i , %i]",*lat,*lon);
}

void go_east(int *lat,int *lon, int movement)
{
    *lat = *lat+movement;
    *lon = *lon+movement;
    printf("current position is : [%i , %i]", *lat,*lon);
}

void go_west(int *lat,int *lon, int movement)
{
    *lat = *lat-movement;
    *lon = *lon-movement;
    printf("current position is : [%i , %i]",*lat,*lon);
}

int main(){
    int latitude;
    int longitude;
    char end[20];
    char end1[]="exit";
    int  choice,movement;
    printf("Enter latitude and longditude : \n");
    scanf("%d%d",&latitude,&longitude);


    do{
        printf("select your choice : \n1: south \n2: north \n3:east \n4: west\n Enter your choice:  ");
        scanf("%d",&choice);
        printf("enter movement in integer: \n");
        scanf("%d",&movement);
        switch(choice){
            case 1:
                go_south(&latitude, &longitude,movement);
                break;
            
            case 2:
                go_north(&latitude, &longitude,movement);
                break;

            case 3:
                go_east(&latitude, &longitude,movement);
                break;

            case 4:
                go_west(&latitude, &longitude,movement);
                break;

            default :
                printf("wrong choice or direction not available: ");
        }
        printf("enter  exit to ");
        scanf("%s",end);
    }while(strcmp(end1,end)!=0);
    return 0;
}

