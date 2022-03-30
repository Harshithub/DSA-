#include <iostream>
using namespace std;
class node
{
        public:
        int data;
        node* next;
        node(int data)
        {
                this->data=data;
                this->next=NULL;
        }
};
void insertAtTail(node* &head, node* &tail,int data)
{
        node* newnode=new node(data);
        if(head==NULL)
        head=tail=newnode;
        else
        {
                tail->next=newnode;
                tail=tail->next;
        }
}
void display(node *head)
{
        node* temp=head;
        while(temp!=NULL)
        {
                cout<<temp->data<<" ";
                temp=temp->next;
        }
}
node*  kreverse(node* &head,int k)
{
        if(head==NULL)
        return NULL;
        node* prev=NULL;
        node* forw=NULL;
        node* cur=head;
        int count=0;
        while(cur!=NULL && count<k )
        {
                forw=cur->next;
                cur->next=prev;
                prev=cur;
                cur=forw;
                count++;
        }
        if(forw!=NULL)
        {
                head->next=kreverse(forw,k);
        }
        return prev;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtTail(head,tail,5);
    insertAtTail(head,tail,6);
   // display(head);
    cout<<endl;
    head=kreverse(head,2);
    display(head);
    return 0;
}