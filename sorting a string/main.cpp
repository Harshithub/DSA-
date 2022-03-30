#include <iostream>
#include<string.h>
using namespace std;

int main()
{ int a=0,i=0,j=0;
char t;
    char *str=(char*)malloc(sizeof(char));
    cout<<"Enter a string"<<endl;
    cin>>str;
    for(str[i];str[i]!='\0';str++)
        a++;
i=0;
    for(j=0;j<a;j++)
    {
        for(str[i];str[i]!='\0';str++)
        {
            if(str[i]>str[i+1])
            {   t=str[i];
                str[i]=str[i+1];
                str[i+1]=t;
            }
        }
    }
    cout<<"sorted string is = ";
    i=0;
    for(str[i];str[i]!='\0';str++)
        cout<<str[i];
    return 0;
}
