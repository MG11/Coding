/*Write a program to determine whether the entered character is in upper case or
lower case, or is an invalid character.*/

#include <iostream>
using namespace std;

int main(){
    char a;

    cout<<"Enter a character";
    cin>>a;

    if(a>'A' && a<'Z'){
        cout<<"Upper case";
    }else if(a>'a' && a<'z'){
        cout<<"Lower case";
    }else{
        cout<<"Invalid character";
    }
}
