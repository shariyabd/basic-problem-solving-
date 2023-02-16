#include <iostream>
using namespace std;

int main(){
    char character;
    char lowerCase;
    char upperCase;


    cout<<"Enter any character to check :"<<endl;
    cin>>character;

    lowerCase = (character=='a' || character=='e' || character=='i' || character=='o' || character=='u');
    upperCase = (character=='A' || character=='E' || character=='I' || character=='O' || character== 'U');

    if(lowerCase || upperCase){
        cout<<"Entered Character is Vowel"<<endl;
    }else{
        cout<<"Entered Character Is Consonant"<<endl;
    }
}