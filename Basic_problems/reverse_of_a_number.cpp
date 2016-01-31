/*Write a program to generate the reverse of a given number.*/

#include<iostream>
using namespace std;

int main(){
    int a,sum = 0;

    cin>>a;

    while(a>0){
        sum = sum*10+(a%10);
        a = a/10;
    }

    cout<<sum;

}
