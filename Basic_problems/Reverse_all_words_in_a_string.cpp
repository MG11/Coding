/*Reverse all the words in a String. e.g. Welcome to Coding Blocks -> emoclew ot gnidoC skcolB.*/

#include <iostream>
using namespace std;


void reverse(char* a,int n){
    int i=0;
    int m=n;
    for(;i<(m/2);i++){
        char c = a[i];
        a[i] = a[n];
        a[n] = c;
        n--;
    }
}
int main(){
    char a[100];

    int i = 0;

    a[i] = cin.get();
    while(a[i] != '\n'){
        a[++i] = cin.get();
    }

    reverse(a,i-1);
    a[i] = '\0';
    cout<<a;
}
