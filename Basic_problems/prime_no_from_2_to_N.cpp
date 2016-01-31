/*Write a pseudo-code which reads N from user and prints all prime numbers from 2 to N.*/

#include<iostream>
using namespace std;

int main(){

    int N;

    cout<<"Enter the number N";
    cin>>N;

    int i,a = 2;
    while(a<N){
        for( i = 2;i<=a;i++){
            if(a%i == 0)
                break;
        }
        if(i == a)
            cout<<a<<"\t";
            a++;
    }
}
