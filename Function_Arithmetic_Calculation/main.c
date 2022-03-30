#include <stdio.h>
#include <stdlib.h>
int add();
int minus();
int divide();
int multiply();
int main()
{
    int s;
    char ch;
    printf("enter the choice\n");
    printf("1. Sum\n");
    printf("2. Subtract\n");
     printf("3. Multiplication\n");
      printf("4. Division\n");
       printf("5. Exit\n");
       scanf("%c",&ch);
       switch(ch)
       {
       case '1':
        s=add();
        printf("Sum is=%d",s);
        break;
       case '2':
        s=minus();
        printf("Subtract is=%d",s);
        break;
       case '3':
        s=multiply();
        printf("Multiplication is=%d",s);
        break;
       case '4':
        s=divide();
        printf("Division is=%d",s);
       case '5':
        exit(0);
        break;
        default :
        printf("Wrong choice");

       }
    return 0;
}
int add()
{
    int n,m;
    printf("\n enter the numbers");
    scanf("%d%d",&n,&m);
    return (n+m);
}
int minus()
{
     int n,m;
    printf("\n enter the numbers");
    scanf("%d\t%d",&n,&m);
    return (n-m);
}
int multiply()
{
     int n,m;
    printf("\n enter the numbers");
    scanf("%d\t%d",&n,&m);
    return (n*m);

}
int divide()
{
     int n,m;
    printf("\n enter the numbers");
    scanf("%d\t%d",&n,&m);
    return (n/m);
}
