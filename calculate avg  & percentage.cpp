

#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter the marks of c"<<endl;
    cin>>arr[0];
     cout<<"Enter the marks of c++"<<endl;
    cin>>arr[1];
     cout<<"Enter the marks of java"<<endl;
    cin>>arr[2];
     cout<<"Enter the marks of ds"<<endl;
    cin>>arr[3];
     cout<<"Enter the marks of os"<<endl;
    cin>>arr[4];
    float sum =0;
    float avg =0;
       float  per =0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
     avg =sum/5;
    
    per=(sum/500)*100;
    cout<<"average = "<<avg<<endl;
    cout<<"percentage =  ["<<per<<"%] \n";
    return 0;
}
