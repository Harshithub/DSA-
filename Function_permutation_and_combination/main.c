#include <stdio.h>
#include <stdlib.h>
int permutation(int,int);
int combination(int,int);
int main()
{int n,r,a;
   char ch;
   printf("PERMUTATION AND COMBINATION\n");
   printf("enter your choice\n");
   printf("1. Permutation\n");
   printf("2. Combination\n");
   printf("3. exit\n");
   scanf("%c",&ch);
   switch(ch)
   {
   case '1':
    printf("enter the value of n  ");
    scanf("%d",&n);
    printf("\n enter the value of r  ");
    scanf("%d",&r);
    a=permutation(n,r);
    printf("\n Value Of permutation is= %d",a);
    break;
   case '2':
     printf("enter the value of n  ");
    scanf("%d",&n);
    printf("\n enter the value of r  ");
    scanf("%d",&r);
    a=combination(n,r);
    printf("\n Value Of comnination is= %d",a);
    break;
   case '3':
    exit(0);
    break;
   default:
    printf("\n Wrong Choice");
   }

    return 0;
}
int permutation(int n, int r)
{
    int i,j,per=1,rt=1;
    for(i=1;i<=n;i++)
        per*=i;
    for(i=1;i<=(n-r);i++)
        rt*=i;
    return (per/rt);
}
int combination(int n,int r)
{
     int i,j,per=1,rt=1,com=1,c,d;
    for(i=1;i<=n;i++)
        per*=i;
    for(i=1;i<=r;i++)
        rt*=i;
    for(i=1;i<=(n-r);i++)
            com*=i;
    c=com*rt;
    d=(per/c);
    return d;
}
