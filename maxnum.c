#include<stdio.h>

int main()
{

    int a,b,c;
    printf("enter number :");
    scanf("%d",&a);

    printf("enter number :");
    scanf("%d",&b);

    printf("enter number :");
    scanf("%d",&c);

    printf("a =%d\nb =%d\nc=%d\n",a,b,c);

    if (a>b && a>c )
    {
    printf("largest number is %d",a);
    }
    else if (c>a && c>b)
    {
        printf("largest number is %d",c);
    }
    
    else{
        printf("largest number id %d",b);
    }
    return 0;
}
