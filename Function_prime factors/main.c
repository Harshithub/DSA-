#include <stdio.h>
#include <stdlib.h>
void prime(long int);
int main()
{
   long int n;
   printf("enter the number   ");
   scanf("%ld",&n);
   prime(n);

}
void prime(long int x)
{
    long int i,j,z=0;
    printf("\n Prime Factors are   ");
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
            {
                for ( j=2;j<i;j++)
                {
                    if(i%j==0)
                        z=1;
                }
                if (z==0)
                    printf(" %ld ",i);
            }
    }
}
