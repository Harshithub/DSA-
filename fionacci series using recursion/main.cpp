#include <iostream>

using namespace std;
int fibonacci(int n)
{
     if(n>2)
     {  static int a=0,b=1,c;
       c=a+b;
       a=b;
       b=c;
       cout<<c<<" ";
       return fibonacci(n-1);
}
}
int main()
{int n;
cout<<"Fibonacci Series\n";
cout<<"enter no. of terms\n";
cin>>n;
cout<<'0'<<" "<<'1'<<" ";
fibonacci(n);

    return 0;
}
