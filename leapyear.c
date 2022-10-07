#include<stdio.h>

int main(){

   int syear,eyear,leapyear;

   printf("enter syear :");
   scanf("%d",&syear);

   printf("enter eyear :");
   scanf("%d",&eyear);

   for (leapyear=syear;leapyear<=eyear;leapyear++)
   {
        if(leapyear%4==0)
        {
            printf("%d\n",leapyear);
        }
   }
    

    return 0;
}