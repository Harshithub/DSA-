#include <stdio.h>
#include <stdlib.h>
void fibonaaci(long long int);
int main()
{ long long  int x;
printf("enter the no. of terms: ");
scanf("%lld",&x);
printf("Fibonaaci series upto %d terms are:\n",x);
fibonaaci(x);

    return 0;
}
void fibonaaci(long long int a)
{
    long long int i,b,c,t;
    b=0;
    c=1;
     printf("%lld\n%lld",b,c);
    for(i=2;i<a;i++)
    {
        t=b+c;
        c=b;
        b=t;
        printf("\n%lld",b+c);
    }
}
