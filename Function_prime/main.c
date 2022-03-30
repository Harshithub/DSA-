#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
   int n,a;
   printf("enter the number   ");
   scanf("%d",&n);
   a=prime(n);
   if (a==1)
    printf("\n number is prime");
   else
    printf("\n number is non-prime");
    return 0;
}
int prime(int x)
{
    int i,z=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            z=0;
    }
    return z;
}
