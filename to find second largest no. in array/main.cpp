#include <iostream>

using namespace std;

int main()
{   int n, i, a[20],b[20],j,t,max2;
cout<<"enter size of array\n";
cin>>n;
cout<<"enter elements in array\n";
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n;i++)
    b[i]=a[i];
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
    }
}
for(j=n-1;j>=0;j--)
{
    if(b[j]>b[j-1])
    {
    max2=b[j-1];
    j=-1;
    }}
cout<<"array is\n";
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
cout<<"\n Second largest no. in array is "<<max2;

    return 0;
}
