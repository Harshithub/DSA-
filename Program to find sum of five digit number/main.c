#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,a[5];
    for(i=1;i<=5;++i)
    {
        printf("enter number");
        scanf("%d",&a[i]);
        sum=a[i]+sum;
    }
    printf("sum is = %d",sum);
    return 0;
};
