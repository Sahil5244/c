#include<stdio.h>

int main(){

    int r,c,x=1;

    for(r=1;r<=5;r++){

        for(c=1;c<=r;c++){
            printf("%d",x++);
        }
        printf("\n");
    }


    return 0;
}