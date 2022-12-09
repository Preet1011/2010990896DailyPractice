#include<iostream>
using namespace std;
class Queue{
	public:
		int first;
		int last;
		int size;
		int *arr;
		Queue(int size){
			first=0;
			last=0;
			this->size=size;
			arr=new int[size];
		}
		bool empty(){
			if(last==first){
				return true;
			}
			return false;
		}
		bool full(){
			if(last-first==size){
				return true;
			}
			return false;
		}
		void nqueue(int data){
			if(!full()){
				last++;
				arr[last%size]=data;
				cout<<"Enqued :"<<data<<endl;
			}else{
				
				cout<<"Queue overflow ."<<endl;
			}
		}
		void dqueue(){
			if(!empty()){
				first++;
				cout<<"Dequeued : "<<arr[first%size]<<endl;
			}else{
				cout<<"Queue underflow ."<<endl;
			}
		}
		void First(){
			if(!empty()){
				cout<<"First : "<<arr[first%size+1]<<endl;
			}else{
				cout<<"Queue is empty."<<endl;
			}
		}
		void Last(){
			if(!empty()){
				cout<<"Last : "<<arr[last%size]<<endl;
			}else 
			{
				cout<<"Queue is empty ."<<endl;
			}
		}
};
int main(){
	Queue q(3);
	q.nqueue(1);
	q.nqueue(2);
	q.nqueue(3);
	q.nqueue(4);
	q.First();
	q.Last();
	q.dqueue();
	q.dqueue();
	q.dqueue();
	q.dqueue();
	q.nqueue(4);
	q.nqueue(5);
	q.dqueue();
	q.dqueue();
	q.First();
	q.Last();
	
	
}