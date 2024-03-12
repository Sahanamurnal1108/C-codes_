#include<stdio.h>
void sum(int);
main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    sum(n);
}
void sum(int n)
{
    int esum=0,osum=0,i=1,n;
    while(i<=n)
    {
        if(num%2==0)
            esum=esum+n;
        else
            osum=osum+n;
        i++;
    }
    printf("odd sum=%d\n even sum=%d",osum,esum);
}
