/*Write a program to find x n . Take x and n from the user.*/

#include <iostream>
using namespace std;

int main(){
    int x,n,pow = 1;

    cin>>x>>n;
    for(int i=0;i<n;i++){
        pow = pow*x;
    }
    cout<<pow;
}
