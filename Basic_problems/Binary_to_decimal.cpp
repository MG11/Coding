/*Given a binary number convert it into decimal.*/

#include <iostream>
using namespace std;

int main(){
    int B;

    cout<<"Enter the binary number";
    cin>>B;

    int a = 1,d = 0;

    while(B>0){

        d += a*(B%10);
        B = B/10;
        a = a*2;
    }
    cout<<d;
}
