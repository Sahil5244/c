#include<stdio.h>

int main(){

    int num1,num2;
    char a;

    printf("enter your choice:");
    scanf("%c",&a);

    printf("enter any number:");
    scanf("%i",&num1);

    printf("enter your number:");
    scanf("%i",&num2);

    switch (a)
    {
        case '+':printf("%i and %i  = %i",num1,num2,num1+num2);
        break;

        case '-':printf("%i and %i  = %i",num1,num2,num1-num2);
        break;

        case '*': printf("Multiplication of %i and %i = %i",num1,num2,num1*num2);
		break;
					
		default:
		printf("Invalid choice...!");
	 			 
    
    }

   return 0;
}