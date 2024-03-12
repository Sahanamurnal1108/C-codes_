#include<stdio.h>
#include<math.h>
main()
{
    float q,r,d,tax;
    float bill;
    printf("enter q,r,d,tax\n");
    scanf("%f%f%f%f",&q,&r,&d,&tax);
    bill=q*r;
    bill=bill+(tax/100*bill);
    bill=bill-(d/100*bill);
    printf("bill=%f",bill);
}
