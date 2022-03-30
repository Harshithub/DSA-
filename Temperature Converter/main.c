#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
double c,s;
c=0,s=0;
printf("Temperature Converter");
    printf("\n 1. celsius to fahrenheit");
    printf("\n 2. fahrenheit to celsius\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\n enter temperature in celsius");
        scanf("%lf",&c);
        s=((9.0/5)*c)+32;
        printf("\n temperature in fahrenheit= %lf",s);
        break;
    case 2:
        printf("\n enter temperature in fahrenheit");
        scanf("%lf",&s);
        c=(5.0/9)*(s-32);
        printf("\n temperature in celsius = %lf",c);
        break;
    default:
        printf("\n wrong input");
    }
    return 0;
}
