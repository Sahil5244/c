#include<stdio.h>

int main()
{
    int a,b;

    printf(" enter number :");
    scanf("%d",&a);

    printf(" enter number :");
    scanf("%d",&b);

    printf("a = %d\nb = %d\n",a,b);

    if (a>b)
    {
        printf("\n\n%d a is bigger number",a);
    }
    else
    {
        printf("\n\n%d b is bigger number",b);
    }
    


    return 0;
}
