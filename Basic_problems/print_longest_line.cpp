/*Write a program to read lines from the input and print the longest line.*/

#include <iostream>
using namespace std;

int main(){

    int n,max = 0,i,c;

    char b[100];

    cout<<"Enter n";
    cin>>n;

    for(int j=0;j<n;j++){
            i = 0;
        while(cin.get()!= '\n'){
            b[i++] =cin.get();
        }
        if(i>max){
            max = i;
            c = j;
        }
    }

    cout<<c<<"th line of length"<<max;
}
