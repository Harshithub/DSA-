#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        fact*=i;
    }
    printf("factorial is= %d",fact);


    return 0;
}
