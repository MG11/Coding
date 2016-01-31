/*Write a program to input a number and print the sum of all it’s even digits and sum
of all its odd digits; separately.*/

#include <iostream>
using namespace std;

int main(){
    int a,e =0,o =0;

    cout<<"Enter the number";
    cin>>a;

    while(a>0){
        int c = a%10;

        if(c%2 == 0)
            e+=c;
        else
            o+=c;
        a = a/10;
    }

    cout<<e<<"\t"<<o;

}

