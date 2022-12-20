//#include<iostream>
//using namespace std;
//
//
//int factorial(int n);
//int main(){
//
//int n;
//cout<<"Enter the no :";
//cin>>n;
//cout<<"The factorial of a  "<<n<<" is "<<factorial(n);
//return 0;
//
//}
//int factorial(int n){
//	if(n>1)
//		 return n*factorial(n-1);
//	else
//	return 1;
//}

#include<iostream>
using namespace std;
int factorial(int n);
int main(){
	 int n;
	cout<<" Enter the no :";
	cin>>n;
	cout<<" FActorial of a  "<<n<<" is "<< factorial(n);
	return 0;
}
 int factorial(int n){
 	if(n>1)
 	return n*factorial(n-1);
 	else 
 	return 1;
 }
