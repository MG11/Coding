/*Write a program to convert a string to lower case.*/

#include <iostream>
using namespace std;

int main(){

    char a[100],b[100];
    int i=0;
        a[i] = cin.get();
    while(a[i] != '\n'){
        a[++i] = cin.get();
    }

    a[i] = '\0';

    for(int j=0;j<i;j++){
        if(a[j]>=65 && a[j]<=90 && a[j] != ' ' ){
            a[j] = a[j] + 32;
        }
    }
    cout<<a;
}
