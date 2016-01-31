/*Given a Number N, check if it’s a member of Fibonacci Sequence?*/

#include<iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the number";
    cin>>N;
    int a =1,b=1;

    while(1){
        int c = a+b;
        if(c==N){
            cout<<"yes";
            return 0;
        }
        if(c>N){
            cout<<"NO";
            return 0;
        }
        a = b;
        b = c;
    }
}
