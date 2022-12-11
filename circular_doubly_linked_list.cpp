#include<iostream>
using namespace std;
class Node{
	public:
	Node* next;
	int data;
	Node* prev;
	Node(int dat){
		data=dat;
		next=NULL;
		prev=NULL;
	}	
};
void end(Node* &last,int a){
	Node* n=new Node(a);
	if(last==NULL){
		last=n;
		last->next=last;
		last->prev=last;
		return;
	}
	n->next=last->next;
	n->prev=last;
	last->next=n;
	Node* temp=last;
	while(temp->prev!=last){
		temp=temp->prev;
	}
	temp->prev=n;
	last=n;
}
void insert(Node* &last,int a,int v){
	Node* n=new Node(v);
	Node* temp=last->next;
	while(temp->data!=a){
		temp=temp->next;
		if(temp==last->next){
			return;
		}
	}
	n->next=temp->next;
	n->prev=temp;
	temp->next=n;
	temp=temp->next;
	temp=temp->next;
	temp->prev=n;
	
	
	if(temp==last){
		last=n;
	}
}
void front(Node* &last,int a){
	Node* n=new Node(a);
	if(last==NULL){
		last=n;
		last->next=last;
		last->prev=last;
		return;
	}
	n->next=last->next;
	n->prev=last;
	last->next=n;
	Node* temp=last;
	while(temp->prev!=last){
		temp=temp->prev;
	}
	temp->prev=n;
}
void replace(Node* &last,int a,int v){
	Node* temp=last->next;
	while(temp->data!=a){
		temp=temp->next;
		if(temp==last->next){
			return;
		}
	}
	temp->data=v;
}

void delet(Node* &last,int a){
	Node* temp=last->next;
	Node* pre=last;
	while(temp->data!=a){
		pre=temp;
		temp=temp->next;
		if(temp==last->next){
			return;
		}
	}
	pre->next=temp->next;
	Node *k=temp->next;
    k->prev=pre;
	if(temp==last){
		last=pre;
	}
	delete temp;
}
void display_for(Node* last){
	Node* temp=last;
	do{
		temp=temp->next;
		cout<<temp->data<<" ";
		
	}while(temp!=last);
	cout<<endl;
}
void display_back(Node* last){
	Node* temp=last;
	do{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}while(temp!=last);
	cout<<endl;
}
int main(){
	Node* last=NULL;
	end(last,3);
	end(last,2);
	end(last,1);
	front(last,4);
	front(last,5);
	delet(last,3);
	replace(last,5,8);
	insert(last,2,7);
    display_back(last);
	display_for(last);
}