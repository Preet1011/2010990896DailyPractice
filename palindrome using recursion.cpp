#include<iostream>
using namespace std;
//int rev(int n, int temp)
//{
//	if(n==0)
//	return temp;;
//	 temp =(temp*10) +(n%10);
//	 return rev(n/10,temp);
//}
//int main(){
//	int n;
//	cout<<"Enter the no :";
//	cin>>n;
//	
//	int temp =rev(n,0);
//	if(temp==n)
//	cout<<n<<"  is Palindrome no "<<endl;
//	else
//	cout<<n<< " is not a plaindrome no "<<endl;
//	return 0;
//}
//int getReverse(int num , int rev){
//	if(num==0)
//	return rev;
//	int rem = num%10;
//	rev= rev*10+rem;
//    return getReverse(num/10, rev); 
//}
//int main(){
//	int num , Reverse =0;
//	cout<<"Enter the no :"<<endl;
//	cin>>num;
//	if(getReverse(num, Reverse)==num)
//	cout<<num<<" is a plaindrome no "<<endl;
//	else
//	cout<<num<<" is not a palidrome ";
//}

 int Reverse(int num,int rev){
 	if(num==0)
 	return rev;
 	int rem=num%10;
 	rev=rev*10+rem;
 	return Reverse(num/10,rev);
 }
 int main(){
 	int num,r=0;
 	cout<<"Enter the no :";
 	cin>>num;
 	if(Reverse(num,r)==num)
 	cout<<num<< " palindrome";
 	else
 	cout<<num<<" not palindrome";
 }