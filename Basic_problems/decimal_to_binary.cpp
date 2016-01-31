//Given a number and convert it into binary.

#include <iostream>
using namespace std;

int main(){
    int a,b = 0,c=1;

    cout<<"Enter the number";
    cin>>a;

    while(a>0){
       b = b+(a%2)*c;
       c=c*10;
        a = a/2;
    }
    cout<<b;
}
