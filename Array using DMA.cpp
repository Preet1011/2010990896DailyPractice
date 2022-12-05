#include<iostream>
using namespace std;
int main(){
	int *p,i,n;
	cout<<"Enter the array size :";
	cin>>n;
	p=new int [n];
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	cout<<"The elements are :";
	for(i=0;i<n;i++){
		cout<<p[i]<<" ";
		
	}
}