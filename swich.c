#include<stdio.h>

int main(){
    int a;

    printf("enter your choice :");
    scanf("%d",&a);


    switch (a)
    {
        case 1:printf("sahil");
        break;

        case 2:printf("vivek");
        break;

        case 3:printf("kvl");
        break;

        case 108:printf("emergency");
        break;

        default: 
        printf("invalid choice");
    }


    return 0;
}