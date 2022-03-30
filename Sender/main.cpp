#include <iostream>
# include<string.h>
using namespace std;
void sender(string);
string reciever(string);
int main()
{   string s;
    cout<<"enter message to send\n";
     cin>>s;
    sender(s);
    return 0;
}
void sender(string s)
{   cout<<"Sender End\n";
    int  cansend=1;
    string a;
    if (cansend==1)
    {    cout<<"send successfully\n";
        a=reciever(s);
        cansend=0;
        if (a=="ok"){cansend=1;}
    }
    else
        cout<<"Can not Send";
}
string  reciever(string s)
{
    cout<<"Receiver  End\n"<<s;
    return("ok");

}
