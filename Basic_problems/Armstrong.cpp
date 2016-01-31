/*Write a Program to determine if the input number is Armstrong number or not.*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;

    cout<<"Enter the number n";
    cin>>n;

    int dup = n;

    while(n>0){
        sum = sum+(n%10)*(n%10)*(n%10);
        n = n/10;
    }

    if(sum == dup){
        cout<<"Armstrong";
    }else{
        cout<<"Not_Armstrong";
    }
}
