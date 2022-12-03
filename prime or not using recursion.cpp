#include<iostream>
using namespace std;
bool isPrime(int n,int i=2){
	if(n<=2)
	  return(n==2) ? true: false;
	  if(n%i==0)
	  return false;
	  if(i*i>n)
	  return true;
	  
	  return isPrime(n,i+1);
}
int main(){
	int n;
	cout<<"Enter the no :";
	cin>>n;
	if(isPrime(n))
	cout<<n<<" is a prime no";
	else
	cout<<n<<" is not a prime no ";
	return 0;
}