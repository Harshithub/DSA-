#include <stdio.h>
#include <stdlib.h>

int main()
{ int a[100][100],b[100][100],c[100][100],i,j,n,m;
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
     printf("\n enter the elements of matrix B\n ");
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             scanf("%d",&b[i][j]);
         }

     }
      for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             c[i][j]=a[i][j]-b[i][j];
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
     printf("\n Subtraction Of Matrix\n");
       for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }

    return 0;
}
