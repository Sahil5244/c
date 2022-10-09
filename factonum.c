#include<stdio.h>

int main(){

     int num=9,n;

     for(n=1;n<=num;n++){
        if(num%n==0){
            printf("%d",n);
        }
     }
     

    return 0;
}