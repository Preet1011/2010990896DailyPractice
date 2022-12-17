#include<iostream>
using namespace std;
class Error{
	public :
	int err;
	
		Error(int e){
			err = e;
		}
		void display(){
			cout << "Error code. " << err << endl;
		}
};

int main(){
	int x;
	cout << "Enter the number: ";
	cin >> x;
	try{
		if(x < 0) throw Error(x);
		else cout << "Input is okay." << endl;
	}
	catch(Error e){
		e.display();
	}
	return 0;
}