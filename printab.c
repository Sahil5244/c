#include<stdio.h>

int main(){

    int r,c;

    for(r=1;r<=10;r++){

        for (c=1;c<=r;c++){
              if(r%2!=0){
                printf("A");
              }
              else{
                printf("B");
              }
        }
        printf("\n");
    }


    return 0;
}