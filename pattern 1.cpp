#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the no of rows :"<<endl;

	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j>i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}































//#include<iostream>
//using namespace std;
// int main (){
// 	int rows;
// 	
// 	cout<<"Enter the no of rows:";
// 	cin>>rows;
// 	
// 	for (int i =1;i<=rows;i++){
// 		for( int j=1;j<=i;j++){
// 			cout<<"* ";
//		 }
//		 cout<<endl;
//	 }
//	 return 0; 
//	 
//	 
// }    
