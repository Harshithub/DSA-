#include <iostream>

using namespace std;

int main()
{   int i,j,a[10][10],b[10][10],c[10][10],n,m,n1,m1;

    cout << "Enter the size of array 'a'->";
    cin>>n>>n1;
    cout<<"enter the size of array 'b'->";
    cin>>m>>m1;
    cout<<"enter element of array 'a' \n";
    for(i=0;i<n;i++)
        for(j=0;j<n1;j++)
        cin>>a[i][j];
    cout<<"enter element of array 'b'\n";
    for(i=0;i<m;i++)
        for(j=0;j<m1;j++)
        cin>>b[i][j];
    cout<<"\n Array 'a'\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
            cout<<"\t"<<a[i][j];
        cout<<endl;
    }
    cout<<"\n Array 'b'\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<m1;j++)
            cout<<"\t"<<b[i][j];
        cout<<endl;
    }
    if(n==m && n1==m1)
    {
        cout<<"Sum of Array is\n";
        for(i=0;i<n;i++)
             {   for(j=0;j<m1;j++)
                  {
            c[i][j]=a[i][j]+b[i][j];
            cout<<"\t"<<c[i][j];
            }
        cout<<endl;
        }
    }
    else
        cout<<"\n Sum cannot be find. array size should be same";
    return 0;
}
