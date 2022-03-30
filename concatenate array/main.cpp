#include <iostream>

using namespace std;

int main()
{  int i,j,n,m,d,a[30],b[30],c[60];
    cout << "Enter the size of array a" << endl;
    cin>>n;
    cout<<"\n enter the size of array b\n";
    cin>>m;
    cout<<"\n enter elements of a\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"\n enter elements of b\n";
    for(i=0;i<m;i++)
    cin>>b[i];
    for(i=0;i<n;i++)
        c[i]=a[i];
    d=n+m;
    for(i=n,j=0;i<d, j<m;i++,j++)
        c[i]=b[j];
    cout<<"\n a->";
    for(i=0;i<n;i++)
        cout<<"\t"<<a[i];
    cout<<"\n b->";
    for(i=0;i<m;i++)
        cout<<"\t"<<b[i];
    cout<<"\n concatenated array is\n ";
    for(i=0;i<d;i++)
        cout<<"\t"<<c[i];

    return 0;
}
