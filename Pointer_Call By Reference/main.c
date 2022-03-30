#include <stdio.h>
#include <stdlib.h>
void reference(int *,int *);
int main()
{
   int a,b;
   printf("enter the numbers\n");
   scanf("%d  %d",&a,&b);
   printf("\n number before calling function are %d %d",a,b);
   reference(&a,&b);
    printf("\n number after calling function are %d %d",a,b);

    return 0;
}
void reference(int *x,int *y)
{
    int t;
    t= *x;
    *x = *y;
    *y =t;
    printf("\n numbers in function are %d %d",*x,*y);
}
