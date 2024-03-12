#include<stdio.h>
int rev(int);
main()
{
    int n,r;
    printf("enter the value of n\n");
    scanf("%d",&n);
    r=rev(n);
    if(r==n)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }
}
    int rev(int n)
    {
        int ld,rev=0;
        while(n!=0)
        {
            ld=n%10;
            rev=rev*10+ld;
            n=n/10;
        }
        return rev;
    }

