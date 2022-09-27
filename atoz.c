#include<stdio.h>

int main()
{
    char value;

    printf("enter ch : \n" );
    scanf("%c",&value);

    if (value>='a' && value<='z' || value>='A' && value<='Z' )
    {
        printf("value is alphabates");
    }
    else{
        printf("value is not alphabates");
    }

    return 0;
}