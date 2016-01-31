/*Given an integer n, print the number of trailing zeroes in n!.*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"output the value of n";
    cin>>n;

    int count = 0;
    for(int i=5;i<=n;i = i*5){
        count+= (n/i);
    }

    cout<<count;
}
