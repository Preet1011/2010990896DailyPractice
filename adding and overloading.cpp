#include<iostream>
using namespace std;
 class complex{
 	int real;
 	int img ;
 	public:
 		complex(){
 			real=0;
 			img=0;
 			
		 }
		 complex( int x,int y){
		 
		 real =x;
		 img =y;
	}
	void display(){
		cout<<real<<"+"<<"i"<<img<<endl;
	}
		 complex operator+(complex a){
		 	complex temp;
		 	temp.real=real+a.real;
		 	temp.img=img+a.img;
		 	return temp;
		 	
		 }
		 complex operator ()( int a,int b,int c, int d){
		 	complex temp;
		 	temp.real=a+b+c;
		 	temp.img=b+c+d;
		 	return temp;
		 }
	
 };
  int main(){
  	complex a(2,3),b(3,4),c,d;
  	c=a+b;
  	d=a(1,2,3,4);
  	c.display();
  	d.display();
  }
 