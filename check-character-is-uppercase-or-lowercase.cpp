#include <iostream>
using namespace std;

int main() {
    
    char ch;
    cout<<"Enter any character to check :"<<endl;
    cin>>ch;
    
    if(ch>=65 && ch<=90){
        cout<<"Entered character is uppercase"<<endl;
    }else if(ch>=48 && ch<=58){
        cout<<"Entered character is digit "<<endl;
    }else if(ch>=97 && ch<=122){
        cout<<"Entered character is lowercase "<<endl;
    }else{
        cout<<"Entered character is special character "<<endl;
    }
  
}