#include <stdio.h>
#include <stdlib.h>
void add();
void multiply();
void transpose();
int main()
{   char ch;
  char ch1='y';
while(ch1=='Y'||ch1=='y'){
    printf("Matrix Operation\n");
    printf("Select Option\n");
    printf("1.Addition of Matrix\n");
    printf("2.Multiplication of Matrix\n");
    printf("3.Transpose Of Matrix\n");
    scanf("%s",&ch);
    switch(ch)
    {
    case '1':
        add();
        break;
    case '2':
        multiply();
        break;
    case '3':
        transpose();
        break;
    default:
        printf("\n Enter Correct option\n");
    }
    printf("\n press y to continue :");
    scanf("%s",&ch1);
}
    return 0;
}
void add(){
    int a[100][100],b[100][100],c[100][100],i,p,o,j,n,m;
    printf("enter the size of row in matrix A:");
    scanf("%d",&n);
    printf("\n enter the size of coloumn of matrix A:");
    scanf("%d",&m);
    printf("\n enter the size of row in matrix B:");
    scanf("%d",&p);
    printf("\n enter the size of coloumn of matrix B:");
    scanf("%d",&o);
    if (p==n&&m==o)
    {
     printf("\n enter the elements of matrix A \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&a[i][j]);
         }

     }
     printf("\n enter the elements of matrix B\n ");
      for(i=0;i<p;i++)
     {
         for(j=0;j<o;j++)
         {
             scanf("%d",&b[i][j]);
         }

     }
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
         }

     }
     printf("\n Matrix A\n ");
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
     printf("\n Matrix B\n");
       for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
     printf("\n Sum Of Matrix\n");
       for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }
     }
     else
        printf("Cannot add\n");
}
     void multiply(){
      int a[100][100],b[100][100],c[100][100],i,j,n,m,p,o;
    printf("enter the size of row in matrix A");
    scanf("%d",&n);
    printf("\n enter the size of coloumn of matrix A");
    scanf("%d",&m);
     printf("\n enter the size of row in matrix B");
    scanf("%d",&p);
    printf("\n enter the size of coloumn of matrix B");
    scanf("%d",&o);
    if (p!=m)
      printf("Cannot Multiply this size of matrixes\n");
    else{
        printf("\n enter the elements of matrix A \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&a[i][j]);
         }

     }
     printf("\n enter the elements of matrix B\n ");
      for(i=0;i<p;i++)
     {
         for(j=0;j<o;j++)
         {
             scanf("%d",&b[i][j]);
         }

     }
      for(i=0;i<n;i++)
     {
         for(j=0;j<o;j++)
         {c[i][j]=0;
         for(int k=0;k<m;k++)
         {

             c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
         }}

     }
     printf("\n Matrix A\n ");
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
     printf("\n Matrix B\n");
       for(i=0;i<p;i++)
     {
         for(j=0;j<o;j++)
         {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
     printf("\n multiplication Of Matrix\n");
       for(i=0;i<n;i++)
     {
         for(j=0;j<o;j++)
         {
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }}
     }
     void transpose(){
      int a[100][100],i,j,n,m,temp;
    printf("enter the size of row in matrix");
    scanf("%d",&n);
    printf("\n enter the size of coloumn of matrix ");
    scanf("%d",&m);
     printf("\n enter the elements of matrix A \n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&a[i][j]);
         }

     }
       printf("\n Matrix A\n ");
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }

      for(i=0;i<n;i++)
     {
         for(j=0;j<i;j++)
         {
             temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
         }

     }


     printf("\n Transpose Of Matrix\n");
       for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }

}
