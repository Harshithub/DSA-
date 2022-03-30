#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long int n,r,temp,sum=0,count=0;
    printf("enter the digit");
    scanf("%ld",&n);
    temp=n;

    while(n>0)
          {
           ++count;
                n=n/10;
          }
    n=temp;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
        --count;
    }
    if (sum==temp)
        printf("\n  Disarium Number");
        else
        printf("\n Not disarium Number");
    return 0;
}
