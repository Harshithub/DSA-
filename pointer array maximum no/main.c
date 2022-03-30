#include <stdio.h>
#include <stdlib.h>
void maximum(int * ,int);
int main()
{
    int a[100],n,i,*p;
    printf("enter the no. of element in array");
    scanf("%d",&n);
    *p=a;
    printf("\n enter element");
    for(i=0;i<n;i++)
    {
       printf("A[%d]=",i+1);
       scanf("%d",p);
       p++;
    }
    printf("\n");
    p=p-n;
    printf("elements in array are\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]=%d stored at %d\n",i+1,*p,p);
        p++;
    }
    p=p-n;
    maximum(p,n);
    return 0;
}
void maximum(int *p,int n)
{int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<*p)
            max=*p;
        p++;
    }
    printf("\n maximum no.= %d",max);
}
