#include<stdio.h>
typedef struct complexNumber
{
    int real;
    int img;
}complex;
complex add(complex ,complex );
complex add(complex x,complex y){
    complex add;
    add.real=x.real+y.real;
    add.img=x.img+y.img;
    return (add);

}



int main(){
    complex a,b,sum;
    a.real=5;
    a.img=6;
    b.real=6;
    b.img=7;
    printf("\na=%d+%di",a.real,a.img);
    printf("\nb=%d+%di",b.real,b.img);
    sum=add(a,b);
    printf("\nsum=%d+%di",sum.real,sum.img);


    return 0;
}