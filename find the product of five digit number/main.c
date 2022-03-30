#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prod=1,a[6],i;
    for(i=1;i<=5;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
        prod=a[i]*prod;
    }
    printf("product is= %d",prod);
    return 0;
}
