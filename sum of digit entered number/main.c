#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,sum=0,r;
    printf("enter the digit");
    scanf("%lld",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\n sum of the entered digit %lld",sum);
    return 0;
}
