#include<stdio.h>

int main()
{
    int eng,maths,phy;
    float total,percent;

    printf("enter english marks: \n");
    scanf("%d",&eng);

    printf("enter maths marks: \n");
    scanf("%d",&maths);

    printf("enter phy marks: \n");
    scanf("%d",&phy);
    

    printf("eng %d\nmaths %d\nphy %d\n",eng,maths,phy);

    total = eng + maths + phy;
    printf("total = %f\n",total);

    percent = total/3;
    printf("percent = %f\n",percent);

    if(percent>=90){
        printf("grade A\n");
    }

    else if(percent>=80){
        printf("grade B\n");
    }

    else if(percent>=70){
        printf("grade C\n");
    }

    else{
        printf("grade D\n");
    }


    return 0;
}