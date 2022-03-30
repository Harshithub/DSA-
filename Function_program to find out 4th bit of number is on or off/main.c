#include <stdio.h>
#include <stdlib.h>
void bitcheck(int);
int main()
{int n;
   printf("program to check whether 4th bit of digit is on or off\n");
   printf("enter the number\n");
   scanf("%d",&n);
   bitcheck(n);
    return 0;
}
void bitcheck(int a)
{
    int r;
      r=(a>>(3));
  if(r&1)
        printf("4th bit of number is ON\n");
    else
        printf("4th bit of number is OFF\n");
}
