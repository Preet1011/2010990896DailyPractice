#include <iostream>
#include<string>
using namespace std;

class university
{
	protected:
	
    int id;
	string name;
    public :
	
	
	
university(int inputID){
	id =inputID;
}
void display(){
	if(id==1){
		name="XYZ1";
	}
	else if (id==2){
		name="XYZ2";
	}
	else if (id==3){
		name="XYZ3";
	}
	else if (id==4){
		name="XYZ4";
	}
	else {
		cout<<"Input VAlid ID "<<endl;
	}
	
	if(id<=5){
		cout<<"Person ID no "<<id<<endl<<"Person name :"<<name<<endl;
	}
}
};

// class {{derived -class-name}} : {{visibility -mode}} {{base class}}
 /*class student: public university{
 	
 	int  semester=5;
 	student(int inputID){
 		id =inputID;
	 }
 };*/
int main(){
	university U(1);
	U.display();
	return 0;
}