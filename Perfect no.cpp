#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter the no "<<endl;
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0)
			sum=sum+i;
		}
		if(n==sum)
			cout<<n<<" is a perfect no "<<endl;
		
		else
			cout<<n<<" is not a perfect no ";
		
	
}