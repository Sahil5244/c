#include<stdio.h>

int main(){

    int row,col;

    for(row=3;row>=1;row--){  

        for(col=1;col<=row;col++){
            printf(" ");
        }

        for(col=row;col<=3;col++)
        {
            printf("* ");
        }
    
    printf("\n");

    }
    return 0;
}