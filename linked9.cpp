#include <bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* next;
};


Node* reverse_even(Node* A)
{
	
	Node* even = NULL;

	
	Node* odd = A;

	
	if (!odd || !odd->next || !odd->next->next)
		return odd;

	
	while (odd && odd->next) {

		
		Node* temp = odd->next;
		odd->next = temp->next;

		
		temp->next = even;

		
		even = temp;

		odd = odd->next;
	}

	odd = A;

	
	while (even) {

		
		Node* temp = even->next;

		
		even->next = odd->next;

		
		odd->next = even;

		
		even = temp;

		
		odd = odd->next->next;
	}

	return A;
}


void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;

}


void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}


int main()
{
	Node* start = NULL;
 int n;
    cin >> n;
    for (int i = n; i>0; i--)
    {
	push(&start, i);
}

	start = reverse_even(start);
	printList(start);

	return 0;
}