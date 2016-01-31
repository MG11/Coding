//Given a Number N, check if it’s a member of Fibonacci Sequence?

#include<iostream>
using namespace std;
int main(){
    int N;

    cout<<"Enter the number N";
    cin>>N;

    int a = 1,b = 1;
        if(N == 1){
            cout<<"Yes";
            return 0;
        }
    while(1){
        int c = a+b;
        a = b;
        b = c;
        if(a ==N){
            cout<<"Yes";
            break;
        }

        if(a>N){
                cout<<"No";
            break;
        }
    }

}
