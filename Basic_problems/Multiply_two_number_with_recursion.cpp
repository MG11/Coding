/*Multiple two numbers m & n using only addition & subtraction. Use Recursion.*/

#include <iostream>
using namespace std;

int multiply(int m,int n){
    if(n == 0)
        return 0;

    else{
        return m+multiply(m,n-1);
    }
}

int main(){

    int m,n;
    cin>>m>>n;

    int r = multiply(m,n);

    cout<<r;
}
