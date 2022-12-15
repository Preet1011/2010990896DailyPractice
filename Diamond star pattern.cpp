#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter the no of rows: ";
	cin>>rows;
	for(int i=0;i<=rows;i++){
		for(int j=rows;j>i;j--){
			cout<<" ";
		}
		for(int k=1;k<=i*2-1;k++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	 for(int i=1;i<=rows-1;i++){
	 	for(int j=0;j<i;j++){
	 		cout<<" ";
		 }
		 for(int k=(rows-i)*2-1;k>0;k--){
		 	cout<<"*";
		 }
		 cout<<endl;
	 }
	 return 0;
}