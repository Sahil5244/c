#include<stdio.h>

int main(){

    int x;

    x=1;

    sahil:
    if(x<=10)
    {
        printf("%i\n",x);
		x++;
    }
    goto sahil;




 return 0;
}