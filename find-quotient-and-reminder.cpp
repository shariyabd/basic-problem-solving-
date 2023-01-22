#include <iostream>
using namespace std;

int main(){

    int divisor, dividend,quotient,reminder;

    cout<<"Enter your dividend"<<endl;
    cin>>dividend;

    cout<<"Enter your divisor"<<endl;
    cin>>divisor;

    quotient = dividend/divisor;
    reminder = dividend%divisor;

    cout<<"Quotient is = "<<quotient<<endl;
    cout<<"Reminder is  = "<<reminder<<endl;


}