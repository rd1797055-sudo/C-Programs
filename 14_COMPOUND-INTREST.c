#include<stdio.h>
#include<math.h>

int main(){
    float p=6000,r=5,t=2,ammount,i;
    ammount=p*pow((1 + r/100),t);
    i=ammount-p;
    printf("Your intrest is %.1f",i);



    return 0;
}