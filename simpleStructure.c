#include <stdio.h>
#include <conio.h>
struct employee{
    int id;
    char name[20];
    float salary;
    //char *post;
};
int main(){

    employee e[6];
    int i;
    for(;i<6;i++){
        printf("Enter id name  salary and post for employee");
        scanf("%d %s %f",&e[i].id,&e[i].name,&e[i].salary);
    }
    printf("\nID\tName\tsalary");
    for(i=0;i<6; i++){
        printf("\n%d \t%s \t%f",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}