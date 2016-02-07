/*Given k find the geometric Sum i.e. 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)*/

#include <iostream>
using namespace std;

int find_power(int n){
    if(n == 0)
        return 1;
    else{
        return 2*find_power(n-1);
    }
}

float find_sum(int n){
    if(n == 1)
        return 1;

    int m = find_power(n);
    float c = (1.0/m) + find_sum(n-1);

    return c;
}
int main(){
    int k;

    cin>>k;

    float c = find_sum(k);

    cout<<c;
}
