#include<stdio.h>
main()
{
    char operator;
    float num1,num2,result;
    printf("enter two numbers\n");
    scanf("%f%f*c%ch",&num1,&num2,&character);
    switch(operator)
    {
        case '+':result=num1+num2;
            printf("num1+num2=%f\n",result);
        break;
        case '-':result=num1-num2;
            print("num1-num2=%f\n",result);
        break;
        case '*':result=num1*num2;
            printf("num1*num2=%f\n",result);
        break;
        case '/':result=num1/num2;
                 if(num2==0)
            printf('error\n');
                 else
            printf("num1/num2=%f\n",result);
        break;
        case'%':(int)num1%(int)num2;
            printf("num1/num2=*f\n",result);
        break;
    }
}






