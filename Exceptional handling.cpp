#include<iostream>
using namespace std;
int main()
{

int x;
int y;
cin>>x;
cin>>y;
try
{
	if(y!=0)
	{
		cout<<x/y<<endl;
		
	}
	else
	{
		throw(x);
	}
}
catch(int c)
{
	cout<<"Input is invalid please reconsider. ";
}
return 0;
}