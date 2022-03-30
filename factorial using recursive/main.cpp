#include <iostream>

using namespace std;
long long   factorial(long n)
{
    if(n>=1)
    return n*factorial(n-1);
    else
    return 1;
}
int main()
{long long  n;
cout<<"Factorial\n";
cout<<"enter a number\n";
cin>>n;
cout<<factorial(n);

    return 0;
}
