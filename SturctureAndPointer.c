#include <stdio.h>

struct fish{

    const char *name;
    const char *species;
    int teeth;
    int age;    
};
void print1(struct fish snappy){
    printf("\n%s is a %s with %i teeth. He is %i year old .",snappy.name, snappy.species, snappy.teeth, snappy.age);
}
void printfThroughRef(struct fish *ptr){
    printf("\n%s is a %s with %i teeth. He is %i year old ",ptr->name, ptr->species, ptr->teeth, ptr->age);
}

int main(){

    struct fish snappy = {"Snappy","Piranha",80,6};
    struct fish *ptr;
    ptr=&snappy;
    print1(snappy);
    printfThroughRef(&snappy);

    printf("\nPrint throught the pointer :  ");
    printf("\n%s is a %s with %i teeth. He is %i year old ",ptr->name, ptr->species, ptr->teeth, ptr->age);

    return 0;
}