#include <stdio.h>
#include <stdlib.h>
int Srch(int A[100][100],int m,int n);
int main()
{
    int A[100][100],m,i,s,j,n;
    printf("enter the size of row in matrix A");
    scanf("%d",&m);
    printf("enter the size of column in matrix A");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    s=Srch(A,m,n);

    return 0;
}
int Srch( int A[100][100],int m,int n)
{
    int k,z=0,c,d,temp;
    printf("enter the element to search");
     scanf("%d",&k);
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(A[i][j]==k)
             {
                 z=1;
             c=i;d=j;
             temp=A[i][j];
             break;
             }
         }
     }
      if(z==1)
     {printf("\n element is %d\n ",temp);
      printf("element found at A[ %d][ %d]",c,d);
     }
     else
        printf("\n Not found");
}
