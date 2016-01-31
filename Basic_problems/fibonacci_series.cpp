/*Draw a flowchart to Print all numbers less than N which are part of Fibonacci Series*/

#include<iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the number N";
    cin>>N;

    if(N<=0)
        return 0;

    int a=1,b=1;

    cout<<a<<"\t"<<b<<"\t";



    while(a+b<=N){
        cout<<a+b<<"\t";
        int c = a;
        a = b;
        b = c+b;
    }

}
