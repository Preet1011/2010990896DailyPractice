#include<iostream>
using namespace std;
 int main (){
 	int rows;
 	
 	cout<<"Enter the no of rows:";
 	cin>>rows;
 	
 	for (int i =0;i<rows;i++){
 		for( int j=2*(rows-i);j>=0;j--){
 			cout<<" ";
		 }
		  for (int k=0;k<=i;k++){
		  	cout<<"* ";
		  }
		  cout<<endl;
	 }
	 return 0; 
	 
	 
 }   