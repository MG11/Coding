/*Draw a flowchart to Print all numbers less than N which are part of Fibonacci Series*/

#include<iostream>
using namespace std;
int main(){
    int i,n,c;
    int a=0,b=1;
    cout<<"Enter the number N";
    cin>>n;
    cout<<a<<"\t";
    if(n>=2)
        cout<<b<<"\t";
    for(i=2;i<n;i++){
        c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
    }
}
