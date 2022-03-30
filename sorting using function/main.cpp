#include <iostream>

using namespace std;
void sorting(int [],int);
int main()
{   int a[100];
     int Size;
    cout << "Program For sorting a array" << endl;
    cout<<"\n Enter the size of array\n";
    cin>>Size;
    cout<<"enter elements in array\n";
    for(int i=0;i<Size;i++)
        cin>>a[i];
    sorting(a,Size);
    return 0;
}
void sorting(int b[],int s){
    int temp,i,j;

for ( i=s-1;i>0;i--)
{  temp=0;
    for ( j=0;j<i;j++)
    {  if (b[j]>b[j+1])
        {   temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;

        }

    }

}
cout<<"\n Sorted Array is\n";
for ( i=0;i<s;i++)
    cout<<" "<<b[i]<<" ";
}
