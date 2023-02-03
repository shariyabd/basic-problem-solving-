#include <iostream>
using namespace std;

int main() {
   
   int n;
   cout<<"Enter a number : "<<endl;
   cin>>n;
   
   if(n%100==2){
       cout<<"Entered number is even "<<endl;
   }else{
       cout<<"Entered number is odd "<<endl;
   }

    return 0;
}