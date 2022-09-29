#include <stdio.h>
  

  int main()
{
  
    int M;
    printf("enter month :");  
    scanf("%d",&M);

    // 1, 3, 5, 7, 8, 10, 12
   // int num1
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
        
    {
        printf("31 days");
    }
    else if(M == 4 || M == 6 || M == 9 || M == 11 ){
        printf("30 days");
    }
    else if(M == 2)
    {
        printf("28-29 days");
    }

    else{
        printf("invalid month");
    }
    
  
    return 0;
}

