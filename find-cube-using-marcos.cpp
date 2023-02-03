#include <iostream>
using namespace std;
#define CUBE(x) (x*x*x);


int main() {
   
    int cube,n;
    
    cout<<"Enter a positive number :"<<endl;
    cin>>n;
    
    cube = CUBE(n);
    cout<<"The cube of entered number is "<<cube<<endl;
    
    return 0;
}