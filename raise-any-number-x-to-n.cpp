#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int x,n,result;

    cout<<"Enter value of x :"<<endl;
    cin>>x;

    cout<<"Enter value of n :"<<endl;
    cin>>n;

    result = pow(x,n);

    cout<<"The power of "<<x<<"^"<<n<<" = "<<result;

    return 0;
}