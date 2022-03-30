#include <iostream>

using namespace std;
struct node{
  int data;
struct node *next;
}*start,*rear;
void enqueue(int dat)
{
    if (rear==NULL)
    {
        rear=new node;
        rear->next=NULL;
        rear->data=dat;
        start=rear;
    }
    else{
        node* temp=new node;
        rear->next=temp;
        temp->data=dat;
        temp->next=NULL;
        rear=temp;
    }

}
void dequeue()
{
    if (start==NULL)
    {
        cout<<"underflow";
    }
    else{
           node* temp=start;
            cout<<temp->data<<" ";
        start=start->next;
    delete(temp);
     cout<<"\n";
    return dequeue();
}}
int main()
{ int d;
char ch;
do{
    cout << "\n enter elements in queue" << endl;
    cin>>d;
        enqueue(d);
        cout<<"\n press Y to enter more elements and N to delete elements";
        cin>>ch;
}while(ch=='Y'||ch=='y');
    dequeue();
    return 0;
}
