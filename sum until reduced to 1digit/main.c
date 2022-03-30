#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,s=2,r,x=0;

    printf("enter the digit");
    scanf("%ld",&n);
     printf("\n %ld \n",n);
    while(s>0)
    {x=0;
        while(n>0)
        {
         r=n%10;
         x=x+r;
         n=n/10;
        }
        n=x;
        s=n/10;
        printf("\n %ld \n",n);

        }
    return 0;
}
