/*Program to determine if a number is palindrome or not.*/

#include<iostream>
using namespace std;

int main(){
    int a,sum = 0;

    cin>>a;
    int dup = a;
    while(a>0){
        sum = sum*10+(a%10);
        a = a/10;
    }

    if(sum == dup){
        cout<<"pallindrome";
    }
}
