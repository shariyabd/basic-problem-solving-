#include <iostream>
using namespace std;

int main() {
   
   int i, num;
   
   cout<<"Generating random numbers between 0 to 100 "<<endl;
  
  for(i=0; i<=10; i++){
      num = rand()%100;
      cout<<"Random number is "<<num<<endl;
  }
 

    return 0;
}