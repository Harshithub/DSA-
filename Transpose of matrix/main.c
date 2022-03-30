#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[100][100],c[100][100],i,j,n,m,temp;
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
    return 0;
}
