#include<iostream>
using namespace std;
int main(){
	int n,r,result=0,ON;
	cout<<"Enter the no :"<<endl;
	cin>>n;
	ON=n;
	 while(ON !=0){
	 	r=ON%10;
	 	result+=r*r*r;
	 	ON/=10;
	 }
	 if(result==n)
	 cout<<n<<" is a armstrong no "<<endl;
	 else
	 cout<<n<<" is not a armstrong "<<endl;
	 return 0;

	 
}