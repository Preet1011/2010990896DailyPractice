#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};

void display(Node * n)
{
	cout<<"The elements are : "<<endl;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}
int main()
{
	Node * head, * second, * third;
	
	//allocate memory
	
	head = new Node();
	second = new Node();
	third = new Node();
	
	//provide data and which points to next one
	
	head->data=7;
	head->next=second;
	
	second->data=9;
	second->next=third;
	
	third->data=5;
	third->next=NULL;
	display(head);
	return 0;	
}