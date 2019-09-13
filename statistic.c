#include <stdio.h>
#include <math.h>
int main(){
    float element[10];
    int max=6;
    float sum,sum1=0;
    float total=0,mean;
    mean = 0.0;
    int i=0;
    float variance , std_deviation;
    printf("Enter array elements  :  ");
    for(;i<max; i++){
        scanf("%f",&element[i]);
        total = total + element[i];
    }
    mean = total / (float)max;

    printf("Total is   :   %f",total);
    printf("mean  (X`)   :   %f",mean);
    //calculate (x-x`)^2;
    for(i=0;i< max  ; i++ ){
        sum+= pow(element[i]-mean, 2);
    }
    variance = sum / (float) max;
    std_deviation = sqrt(variance);

    printf("vairance is   :  %f", variance);
    printf("standart deviation is :  %f", std_deviation);
    return 0;
}