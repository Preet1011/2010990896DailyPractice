#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node * next;
	
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};
void display(Node*n)
{
	cout<<"The elements are: "<<endl;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}
 
void front(Node*&head,int dat)
{
	Node*n =new Node(dat);
	if(head==NULL)
	{
		head=n;
		return;
	}
	n->next=head;
	head=n;
}
void end(Node *& head,int dat)
{
	Node*n=new Node(dat);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	Node* temp=head;
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
bool Palindrome(Node *head1, Node *head2)
{
	Node *temp1=head1;
	Node *temp2=head2;
	while(temp1 && temp2)
	{
		if(temp1->data==temp2->data)
		{
			
		
		temp1=temp1->next;
		temp2=temp2->next;
		
		}
		else return 0;
	}
	if(temp1==NULL && temp2==NULL){
		return 1;
	}
	return 0;
}
int main()
{
	Node *head1,*head2;
	int n,num;
	cout<<"Enter number of nodes"<<endl;
	cin>>n;
	cout<<"Enter 1st number"<<endl;
	cin>>num;
	
	head1=new Node(num);
	head2=new Node(num);
	
	for(int i=2;i<=n;i++)
	{
		cout<<"Enter "<<i<<" th number"<<endl;
		cin>>num;
		
		front(head1,num);
		end(head2,num);
	}
	display(head1);
	display(head2);
	
	cout<<"The number is ";
	if(Palindrome(head1,head2))
	{
		cout<<"Plaindrome";
	}
	else
	{
		cout<<"Not a plaindrome";
	}
	
	return 0;
}