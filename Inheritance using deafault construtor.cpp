#include <iostream>
#include<string>
using namespace std;

class university
{
	
	protected:
	university(){
	}
    int id;
	string name;
    public :
	
	
	
university(int inputID){
	id =inputID;
}
void disp1(){
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
 class student: public university{
 	public:
 	
 	int  semester=5;
 	student(int inputID){
 		id =inputID;
	 }
	 
	 void disp2(){
	 	if(id==1 || id==4){
	 		disp1();
	 		cout<<"Semester"<<semester<<endl;
		 }
		 else{
		 	cout<<"Person is not a student "<<endl;
		 }
	 }
 };
int main(){
	university U(1);
	U.disp1();
	student S(2);
	S.disp2();
    return 0;
}