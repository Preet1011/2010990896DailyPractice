#include<iostream>
using namespace std;
class complex
{
	public:
	int real, img;
	
	complex()
	{
		real=0;
		img=0;
	}
	complex(int r, int im)
	{
		real=r;
		img=im;
	}
	void display()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	complex operator +(complex c)
	{
		complex temp;
		temp.real=real +c.real;
		temp.img=img +c.img;
		return temp;
	}
};
int main(){
	complex A(2,3), B(3,4) ,C;
	C=A+B;//A.add(B)
	C.display();
	return 0;
}