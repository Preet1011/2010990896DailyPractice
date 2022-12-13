#include<iostream>
using namespace std;
class Node{
	public:
	Node* next;
	int data;
	Node(int dat){
		data=dat;
		next=NULL;
	}	
};
void end(Node* &last,int a){
	Node* n=new Node(a);
	if(last==NULL){
		last=n;
		last->next=last;
		return;
	}
	n->next=last->next;
	last->next=n;
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
	temp->next=n;
	if(temp==last){
		last=n;
	}
}
void front(Node* &last,int a){
	Node* n=new Node(a);
	if(last==NULL){
		last=n;
		last->next=last;
		return;
	}
	n->next=last->next;
	last->next=n;
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
	Node* prev=last;
	while(temp->data!=a){
		prev=temp;
		temp=temp->next;
		if(temp==last->next){
			return;
		}
	}
	prev->next=temp->next;
	if(temp==last){
		last=prev;
	}
	delete temp;
}
void display(Node* last){
	Node* temp=last;
	do{
		temp=temp->next;
		cout<<temp->data<<" ";
		
	}while(temp!=last);
	cout<<endl;
}
int main(){
	Node* last=NULL;
	front(last,4);
	front(last,5);
	end(last,3);
	end(last,2);
	end(last,1);
	replace(last,1,6);
	delet(last,3);
	insert(last,6,7);
	display(last);
}