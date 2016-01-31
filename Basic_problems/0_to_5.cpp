/*Given a integer as a input and replace all the ‘0’ with ‘5’ in the integer. e.g.
Input102 should output 152*/

#include <iostream>
using namespace std;

int convert0to5(int num){

    if(num==0)
        return 0;

    int digit = num%10;
    if(digit == 0)
        digit = 5;

    return convert0to5(num/10)*10+digit;

}

int main(){

    int n;

    cout<<"Enter the value of n";
    cin>>n;

    int num = convert0to5(n);
    cout<<num;
}
