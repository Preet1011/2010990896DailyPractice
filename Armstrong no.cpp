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
	 cout<<n<<" is a Armstrong number "<<endl;
	 else
	 cout<<n<<" is not a Armstrong number"<<endl;
	 return 0;

	 
}
