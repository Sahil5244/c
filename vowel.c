#include<stdio.h>

int main()
{
    char ch;
    printf("enter ch :");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        printf("ch is Consonant ",ch);
    }
   
    else{
        printf("ch is vovel");
    }
    
    
    return 0;
}
