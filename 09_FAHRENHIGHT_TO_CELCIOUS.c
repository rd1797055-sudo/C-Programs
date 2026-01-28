#include<stdio.h>

int main(){
    float c,f;
    printf("Enter Temprature in Fahrenhight:");
    scanf("%f",&f);
    c=5.0*(f-32.0)/9.0;
    printf("Your temprature in celcious is %f",c);




    return 0;
}