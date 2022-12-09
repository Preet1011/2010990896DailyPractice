#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node*next;
	Node(int dat)
	{
		data=dat;
		next=NULL;
		
	}
};

void display(Node *& last)
{
	Node*temp=last;
	cout<<"The elements are :"<<endl;
	do
	{
		temp=temp->next;
		cout<<temp->data<<" ";
	}
	while(temp!=last);
	cout<<endl;
}

void front(Node *&last,int dat)
{
	Node *n=new Node(dat);
	n->next=last->next;
	last->next=n;
	
}

void end(Node*& last,int dat)
{
    Node *n=new Node(dat);
    n->next=last->next;
	last->next=n;
	last=n;	
}
void insert(Node*&last,int dat,int Node_val)
{
	Node *n=new Node(dat);
	Node *temp=last->next;
	while(temp->data!=Node_val)
	{
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
}
void delete_Node(Node*&last,int Node_val)
{
	Node *prev=last->next;
	Node *temp=last->next;
	
	if(last->data==Node_val)
	{
		last=temp->next;
	}
	while(temp->data!=Node_val)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	temp=temp->next;
	if(temp==last->next)
	{
		cout<<"Node value not found :";
		return ;
	}
}
int main()
{
	Node*last=new Node(3);
	last->next=last;
	front(last,2);
	front(last,1);
	cout<<"After inserting at the beginning ";
	display(last);
	end(last,4);
	end(last,5);
	end(last,7);
	cout<<"After inserting at the end :";
	display(last);
	
	insert(last,5,2);
	insert(last,7,4);
	cout<<"After inserting at specified node value : ";
	display(last);
	
	delete_Node(last,2);
	cout<<"afetr deleting the element:";
	display(last);
	
	return 0;
	
	
}