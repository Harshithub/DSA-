#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int  n,rem,a[100],b[100];
   int i,k,z;
   char c;
   c='y';
   while(c=='y'||c=='Y')
   {z=0,i=0,k=0;
    printf("enter the number   ");
    scanf("%li",&n);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        b[k]=rem;
            n=n/10;
            ++i;
            ++k;
            }
            k=0;
            for(int j=i-1;j>=0;--j)
            {
                if(a[j]==b[k])0
                    z=1;
                    else
                        z=0;
                  ++k;
            }
            if(z==1)
                printf("\n Number is palindrome\n");
            else
               {printf("\n Number is not palindrome\n");
               }

                printf("\n if you want do it again ,press'y'and  to exit, press'n'  ");
                scanf("%s",&c);
   }
    return 0;
}
