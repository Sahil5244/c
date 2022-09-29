#include<stdio.h>

int main()
{
    char ch;
    printf("enter ch :");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <='z' ) 
    {
        printf("ch is lowercase");
    }
   
    else{
        printf("ch is uppercase");
    }
    
    
    return 0;
}
