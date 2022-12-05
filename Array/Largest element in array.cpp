#include<iostream>
using namespace std;
int largest(int arr[],int n){

int i;
int max =arr[0];
for(int i=0;i<n;i++)
	if(arr[i]>max)
	max=arr[i];
	
   return max;	
}
 int main()
 {
 	int n,i,arr[50];
 	cout<<"Enter the no of array :"<<endl;
 	cin>>n;
 	cout<<"Enter the elements in the array :"<<endl;
 	for(i=0;i<n;i++){
 		cin>>arr[i];
 }
 	 cout<<"Largest element in the array is "<<largest(arr,n);
 	 return 0 ;
 	 
 	
 }

