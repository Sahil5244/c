#include<stdio.h>
int main()
{
	
	int x;
    char ch;
	
	for(x='a';x<='z';x++)
	{
		
		if(x=='s' || x=='a' || x=='h' || x=='i' || x=='l')
		{
			continue;
		}
		printf("%c\n",x);
	}
	
	
	return 0;
}