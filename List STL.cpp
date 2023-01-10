#include<iostream>
#include<list>
using namespace std;
void display(list<int> &L)
{
	cout<<"Elements of list are:"<<endl;  
	list<int>::iterator it; 
	for(it=L.begin();it!=L.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
 int main()
 {
 	list<int> L;
 	list<int> M(3);
 	int size,elements;
 	cout<<"Enter size of list : "<<endl;
 	cin>>size;
 	
 	for(int i=0;i<size;i++)
 	{
 		cout<<"Enter "<<i+1<<" th element of the list : ";
 		cin>>elements;
 		L.push_back(elements); 
 		 
 		 
 	    
	 }
	 display(L);
	 list<int>::iterator ir;
	 ir = M.begin();
	*ir=9;
	 ir++;
	 *ir =5;
	 ir++;
	 *ir=7;
	 
	 //display(M);
	 //L.pop_back();   //remove from back
	 //display(l);
	 //L.remove(3);
	 
	 //L.pop_front(); 	                    // remove from front
	 L.sort();
	 M.sort();
	 L.merge(M);
   	display(L);
	 return 0;
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 }
