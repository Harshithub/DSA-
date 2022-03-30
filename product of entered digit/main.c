#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,r,prod=1;
    printf("enter the digit");
    scanf("%lld",&n);
    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;

    }
    printf("\n product of entered digit %lld",prod);
    return 0;
}
