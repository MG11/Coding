/*Write a function that returns the sum of the digits of an integer.*/

#include <iostream>
using namespace std;

int sum_of_digits(int n){
    if(n == 0)
        return 0;

    if(n<10)
        return n;

    return (n%10)+sum_of_digits(n/10);

}

int main(){
    int n;
    cin>>n;

    int sum = sum_of_digits(n);

    cout<<sum;
}
