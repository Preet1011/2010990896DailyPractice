#include<iostream>
using namespace std;
class integer{
	int x;
	int y;
	public:
		integer(){
			x=10;
			y=5;
			
		}
		void display(){
			cout<<"1st integer : "<<x<<endl;
			cout<<"2nd integer: "<<y<<endl;
			
		}
};
int main(){
	integer i;
	i.display();
	return 0;
}