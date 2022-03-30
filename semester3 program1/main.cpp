#include <iostream>

using namespace std;

int main()
{    int n;
    cout << "***Program to check whether a no. is positive or negative****" << endl;
    cout<<"Harshit Shukla"<<endl;
    cout<<"20SCSE1010256"<<endl;
    cout<<" enter a number -->";
    cin>>n;
    switch(n>0)
    {
    case 1:
          cout<<"\n Number is positive";
          break;
    case 0:
        switch(n<0)
        {case 1:
        cout<<"\n Number is negative";
        break;
         case 0:
         cout<<"\n Number is zero";

        }
        }
    return 0;
}
