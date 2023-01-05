#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node*next;
		
		node(int dat)
		{
			data=dat;
			next=NULL;
			
		}
};
void display(node*n)
{
	cout<<"The elements are: "<<endl;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}
 
void front(node*&head,int dat)
{
	node*n =new node(dat);
	if(head==NULL)
	{
		head=n;
		return;
	}
	n->next=head;
	head=n;
}
void end(node *& head,int dat)
{
	node*n=new node(dat);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	node* temp=head;
	
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void update (node *&head,int old,int newl)
{
	node*temp=head;
	while(temp->data!=old)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			return;
		}
	}
	temp->data=newl;
}
void delete_data(node *&head,int data_del)
{
	node*temp=head;
	node*prev=head;
	
	if(head->data==data_del)
	{
		head=temp->next;
		delete temp;
	}
	
	while(temp->data!=data_del)
	{
		prev=temp;
		temp=temp->next;
		if(temp==NULL)
		{
			return;
		}
		prev->next=temp->next;
		delete temp;
	}
}
void mid(node *&head,int a,int k)
{
	node *n=new node(a);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	node *temp=head;
	while(temp->data!=k){
		temp=temp->next;
	}
	n->next=temp->next;
	temp->next=n;
	     
	
}

int main(){
	node * head=new node(5);
	front(head,3);
	front(head,2);
	display(head);
	
	end(head,9);
	display(head);
	mid(head,7,3);
	display(head);
	update(head,9,5);
	display(head);
	delete_data(head,5);
    display(head);	
	return 0;
}