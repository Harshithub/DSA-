#include <iostream>

using namespace std;

int main()
{  int a[20][20],n,m,sumd=0,sumo=0,i,j;
    cout<<"enter the size of row and column\n";
    cin>>n>>m;
    cout<<"enter elements of matrix\n";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    cout<<"matrix is \n";
    for( i=0;i<n;i++)
    {    for( j=0;j<m;j++)
            cout<<"\t"<<a[i][j];
         cout<<endl;
    }
    for( i=0;i<n;i++)
    {    for( j=0;j<m;j++)
           {
               if (i==j)
               {
                sumd=sumd + a[i][j];
               }
                else
                    {sumo=sumo + a[i][j];
           }}
    }
     cout<<"\n Sum of diagonal element = "<<sumd;
     cout<<"\n Sum of other element = "<<sumo;
    return 0;
}
