#include <iostream>
using namespace std;

int main() {
   
  int num1,num2,num3,sum,avg;
  
  cout<<"Enter your first number :"<<endl;
  cin>>num1;
  cout<<"Enter your second number :"<<endl;
  cin>>num2;
  cout<<"Enter your third number :"<<endl;
  cin>>num3;
  
  sum = num1+num2+num3;
  avg = sum/3;
  
  cout<<"Summation of these number is "<<sum<<endl;
  cout<<"Avarage of these number is "<<avg;

    return 0;

}