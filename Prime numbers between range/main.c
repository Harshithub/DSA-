#include <stdio.h>
#include <stdlib.h>

void prime(long int , long int);
int main()
{
   long int n,m;
   printf("Program to find the prime numbers between range\n");
   printf("enter the range from ");
   scanf("%ld",&n,&m);
   printf("to\t");
   scanf("%ld",&m);
   prime(n,m);

    return 0;
}
void prime(long int x,long int y)
{
    long int i,j;
    int z;
    printf("prime numbers between %ld to %ld are:\n\t",x,y);
    if(x==0||x==1)
    {
    for(j=2;j<=y;j++)
    {z=1;
    for(i=2;i<j;i++)
    {
        if(j%i==0)
            z=0;
    }
    if(z==1)
    {
        printf("%ld\t",j);
    }

}}
else
{   for(j=x;j<=y;j++)
    {z=1;
    for(i=2;i<j;i++)
    {
        if(j%i==0)
            z=0;
    }
    if(z==1)
    {
        printf("%ld\t",j);
    }


}
}}
