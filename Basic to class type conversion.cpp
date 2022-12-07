#include<iostream>
using namespace std;

 class Integer
 {
 	int i ;
 	public:
 	void display()
 	{
 		cout<<"The valude of integer is : "<<i<<endl;
	 }
	 Integer (int i){
	 	this -> i=i;
	 }
	 operator int(){
	 	return i;
	 }
 };
 
 int main(){
 	Integer J=100;
 	J.display();
 	int y =J;
 	cout<<"The value of y is :"<<y<<endl;
 	return 0;
 }