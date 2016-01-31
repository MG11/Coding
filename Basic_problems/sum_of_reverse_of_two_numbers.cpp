/*Find sum of reverse of two numbers.*/

#include<iostream>
using namespace std;

int reverse(int num){
    int sum = 0;
    while(num != 0){
        sum = sum*10+(num%10);
        num = num/10;
    }
    return sum;
}
int main(){
    int num1,num2;

    cout<<"enter two numbers";
    cin>>num1>>num2;

    int a = reverse(num1);
    int b = reverse(num2);

    cout<<a+b;

}
