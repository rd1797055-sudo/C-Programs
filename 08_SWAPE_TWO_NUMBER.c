#include<stdio.h>

int main(){
    int a=6,b=5,temp;
    printf("Before swaping the values are %d and %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swaping the values are %d and %d",a,b);


    return 0;
}