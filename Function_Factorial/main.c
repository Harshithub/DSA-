#include <stdio.h>
#include <stdlib.h>
void factorial(int);
int main()
{int n;
printf("enter the number\n");
scanf("%d",&n);
 factorial( n);

    return 0;
}
void factorial(int z)
{
    int i, fact=1;
    for(i=1;i<=z;i++)
        fact*=i;
    printf("\n factorial is = %d",fact);
}
