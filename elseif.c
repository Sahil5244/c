#include<stdio.h>

int main(){

     int num1;
     printf("enter number : ");
     scanf("%d",&num1);

    if (num1>0)
    {
        printf("+ve number");
    }
    else if(num1==0)
    {
        printf("value is zero");
    }
    
     else{
            printf("-ve number ");
        }

    return 0;
}