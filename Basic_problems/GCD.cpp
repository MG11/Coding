// program to print GCD of two numbers..

#include <iostream>
using namespace std;

int main(){
    int a,b,gcd;

    cout<<"Enter the two numbers";
    cin>>a>>b;
    int c = 1;
    while(c<a && c<b){
        if( a%c == 0 && b%c ==0)
            gcd = c;
            c++;
    }
    cout<<gcd;
}
