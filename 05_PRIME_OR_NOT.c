#include<stdio.h>


int main(){
    int a=29,flag=1;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a<=1){
        printf("%d is not a prime number ");
    }
    else{
        for(int i=2;i<=a-1;i++){
            if(a%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d is a prime number",a);
        }
        else{
            printf("%d is not a prime number",a);
        }
    }



    return 0;
}