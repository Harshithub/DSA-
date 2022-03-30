#include <stdio.h>
#include <stdlib.h>

int main()
{int n,pal,s,r;
char c;
c='y';
while(c=='y'||c=='Y')
{s=0;
    printf("enter the number ");
    scanf("%d",&n);
    pal=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;

    }
    if(s==pal)
        printf("\n number is palindrome");
    else
        {printf("\n number is not palindrome");
        }
        printf("\n if you want to continue,press y and press n to exit    ");
        scanf("%s",&c);
        if(c=='n'||c=='N')
            exit(0);
}

    return 0;
}
