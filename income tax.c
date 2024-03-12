#include<stdio.h>
main()
{
    float income,tax;
    printf("enter income\n");
    scanf("%f",&income);
    if(income<=150000)
    {
        tax=0;
        printf("tax=%f\n",tax);
    }
    else if(income>150000&&income<=300000)
    {
        tax=150000*0+(income-150000)*0.10;
        printf("tax=%f\n",tax);
    }
    else if(income>300000&&income<=500000)
    {
        tax=15000+(income-300000)*0.20;
        printf("tax=%f\n",tax);
    }
    else
    {
        tax=0+15000+40000+(income-500000)*0.30;
        printf("tax=%f\n",tax);
    }
}
