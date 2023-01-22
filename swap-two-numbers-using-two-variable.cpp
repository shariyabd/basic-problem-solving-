#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter your first number :"<<endl;
    cin>>a;
    cout<<"Enter your second number :"<<endl;
    cin>>b;

// This is a way to solve this problem 
    //  a = a+b;
    //  b = a-b;
    //  a = a-b;


// this is another way to solve this problem 
    
    a = a-b;
    b = b-a;
    a = a+b;
    b = a-b+a;
   

    cout<<" a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}