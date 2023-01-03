#include<iostream>
using namespace std;
int main(){
	int n,largest;
	int num[50];
	cout<<"Enter the no of elements: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter the elements :"<<endl;
		cin>>num[i];
	}
	largest = num[0];
	for(int i=0;i<n;i++){
		if(largest<num[i])
		largest=num[i];
		
		 
	}
	cout<<"Largest number  is "<<largest;
	return 0;
	
}