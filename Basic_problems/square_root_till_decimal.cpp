#include <iostream>
using namespace std;

int main(){

    int n,num;
    cout<<"Enter n and the number";
    cin>>n>>num;

    double i=0.0,currentPrecision = 0;
    double increment = 1;
    while(currentPrecision<=n){
        while(i*i<=num){
            i = i+increment;
        }
        i = i-increment;
        increment = increment/10;
        currentPrecision++;
    }

    cout<<"square_root"<<i;
}
