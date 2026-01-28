#include<stdbool.h>
#include<stdio.h>
#include<math.h>
bool prime(int n){
    if(n==0||n==1){
        return false;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        
    }
    return true;
}

int main(){
    int n=50;
    for(int i=1;i<=50;i++){
        if(prime(i)){
            printf("%d\n",i);
        }
    }


    return 0;
}