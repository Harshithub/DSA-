#include <iostream>

using namespace std;
int *sorting(int [],int,int,int,int);
int main()
{   int a[100];
     int Size;
     int *p;
    cout << "Program For sorting a array" << endl;
    cout<<"\n Enter the size of array\n";
    cin>>Size;
    cout<<"enter elements in array\n";
    for(int i=0;i<Size;i++)
        cin>>a[i];
    p=sorting(a,Size,0,0,1);
    cout<<"\n sorted Array";
    for(int i=0;i<Size;i++)
    {
        cout<<" "<<p[i]<<" ";
    }
    return 0;
}
int *sorting(int a[],int s,int i,int j,int flag)
{  int temp;
    if(i<s-1)
    {
        if(flag)
        {
            j=i+1;
        }
        if(j<s)
        {  if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[i]=temp;
        }
        sorting(a,s,i,j+1,0);
        }
        sorting(a,s,i+1,0,1);

    }
    else{return a;}
}
