#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    complex(int r, int i){
        real=r;
        img=i;
    }
    bool operator <= (complex b){
        if(real<=b.real){
        	if (real==b.real){
        		if(img<=
				b.img){
        			return true;
				}
				return false;
			}
            return true;
        }
        return false;
        
    }
    
};
int main(){
    complex A(4, 6), B(4, 5);
    if(A<=B){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}