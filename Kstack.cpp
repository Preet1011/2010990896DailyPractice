#include<iostream>
using namespace std;
class nstacks
{
	public:
	int*arr;
	int num_stacks;
	int size;
	int*top;
	
	nstacks(int num_stacks,int size)
	{
		this->num_stacks=num_stacks;
		this->size=size;
		arr=new int [num_stacks*size];
		top=new int[num_stacks];
		
		for(int i=0;i<num_stacks;i++)
		{
			top[i]=-1+size*i;
			
		}
	}
    void push(int stack_num,int data)
	{
		if(top[stack_num]<-1+(size+1)*stack_num)
		{
			top[stack_num]++;
			arr[top[stack_num]]=data;
		}
		else{
			cout<<"Overflow in stack"<<stack_num<<endl;
			return ;
		}
		}	
		void pop(int stack_num)
		{
			if(top[stack_num]>-1+size*stack_num)
			{
				cout<<"Popped"<<arr[top[stack_num]]<<"from stack"<<stack_num<<endl;
				top[stack_num];
			}
			else{cout<<"underflow in stack"<<stack_num<<endl;
			return ;
			}
			
			}
	
		
		void peek(int stack_num)
		{
			if(top[stack_num]>-1+size*stack_num)
			{
				cout<<"Top element in stack"<<stack_num<<"is "<<arr[top[stack_num]]<<endl;
			}
			else{
				cout<<"No element in stack"<<stack_num<<endl;
			}
		}
};
int main(){
	nstacks n(3,2);
	n.push(1,1);
	n.push(1,2);
	n.push(1,2);
    n.push(1,2);
	n.push(2,4);
	n.push(2,5);
	n.push(2,2);
	n.pop(2);
	n.pop(2);
	n.pop(2);
	n.peek(1);
}