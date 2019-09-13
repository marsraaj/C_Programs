#include <stdio.h>
int findSecondLagest(int *element,int count){
    int first=*element;
    element++;
    int second=*element;
    int i=1;

    for(;i<count;i++){
        if(first < *element){
            second=first;
            first=*element;
        }
        if(second <*element && first > *element){
            second=*element;
        }
        element++;
    }
    return second;
}
int main(){
    int elements[25];
    int count;
    printf("Enter size of the element array :  ");
    scanf("%d",&count);
    printf("Enter array lements :   ");
    for(int i=0; i<count; i++){
        scanf("%i",&elements[i]);
    }
    int result=findSecondLagest(elements,count);
    printf("REsult is :   %i",result);
    return 0;
}