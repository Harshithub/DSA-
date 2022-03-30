#include <iostream>
#include <stdio.h>
using namespace std;
struct student{
int rno;
char name[30];
char fname[30];
int marks[3];
float cgp;
};
int main()
{struct student s[5];
int sum,temp;
char ch;
for (int i=0;i<5;i++)
{    sum=0;

    cout<<"\n enter roll no. of student:";
    cin>>s[i].rno;
    cout<<"\n enter name of student:";
    gets(s[i].name);
   cout<<"\n enter father name of student:";
    gets(s[i].fname);
    cout<<"\n enter marks of "<<s[i].name;
    for (int j=0;j<3;j++){
        cout<<"\n subject "<<j+1<<" -";
        cin>>s[i].marks[j];
        sum=sum+s[i].marks[j];
    }
    s[i].cgp=sum/30;
}
do{
    cout<<"\n enter roll no. of student:";
    cin>>temp;
    for (int i=0;i<5;i++){
            if (temp==s[i].rno){
                cout<<"\n Name :"<<s[i].name;
                cout<<"\n Father Name:"<<s[i].fname;
                for (int j=0;j<3;j++){
                    cout<<"\n marks of subject"<<j+1<<" -"<<s[i].marks[j];
                }
                cout<<"\n CGPA:"<<s[i].cgp;
            }
            else
                cout<<"\n Not Found";
    }
            cout<<"\n press y to search more students and n to exit";
               cin>>ch;
}while(ch=='Y'||ch=='y');

    return 0;
}
