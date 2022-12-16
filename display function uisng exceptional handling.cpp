#include<iostream>
using namespace std;

void display(int x){
	try{
	   if(x == -1){
		  throw x;
	   }
	   else if(x == 0){
		  throw 'x';
	   }
	   else if(x == 1){
		  throw 1.0;
	   }
	}
	catch(char c){
	  	cout << "Input is Invalid. Please reconsider." << endl;
	  }
	  catch(int d){
	  	cout << "Error 404" << endl;
	  }
	  catch(double b){
	  	cout << "Error 505" << endl;
	  }
}

int main(){
		display(-1);
	    display(0);
	    display(1);
	  
	return 0;
}