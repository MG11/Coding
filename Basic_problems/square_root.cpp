/*Write a program to find square root of an input.
a. Just find the integral part
b. Find the square root with an accuracy of n decimal points, n is provided by
the user.*/

#include <iostream>
using namespace std;

int main(){

    int a;

    cout<<"Enter the number";
    cin>>a;

    int c=1;
    while(c*c<a){
            c++;
    }
    cout<<--c;
}
