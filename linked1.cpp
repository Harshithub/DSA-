#include<iostream>
using namespace std;
class Linked
{
    public:
    int count=0;
    class Node{
        public:
        int data;
        Node* next;
    }*head,*prev;
    
   void append(Node** head, int new_data)
{  
    Node* new_node = new Node();
 
    Node *last = *head;
 
    new_node->data = new_data;
 
    new_node->next = NULL;
 
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
 
    while (last->next != NULL)
    {
        last = last->next;
    }
 
    last->next = new_node;
    count++;
    return;
}
void printList(Node *node,int b)
{ 
   for(int i=1;i<b;i++)
    {
        
        node = node->next;
    }
    cout<<node->data;
}
};
int main()
{  Linked * list= new Linked();
int count;
Linked::Node *head=NULL;
int n,d,b;
cin>>n;
count=(n/2)+1;
while(n--)
{    cin>>d;
    list->append(&head,d);
}
cin>>b;

if ((count-b)<0)
cout<<"-1";
else
  list->printList(head,count-b);
    
}