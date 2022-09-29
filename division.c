#include<stdio.h>

int main()
{
    int a;
    printf("enter number :");
    scanf("%d",&a);

    if((a % 5 ==0) && (a % 11 == 0))
    {
        printf("value is divisible 11 and 5 ");
    }
   
    else{
        printf("not divisible");
    }
    
    
    return 0;
}
