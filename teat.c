#include<stdio.h>

void test()
{
	int a,b;
	
	printf("\nEnter two int numbers: \n");
	scanf("%d %d",&a,&b);
	printf("\nsum = %d",a+b);
}

int main()
{
	test();
	test();
	test();
	return 0;
}