/*Write a program to find a small string inside a bigger string. If found, return the starting position.*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[100],b[100],i=0;

    a[i] = cin.get();

    while(a[i] != '\n'){
        a[++i] = cin.get();
    }

    a[i] = '\0';
    cout<<"Enter the small string";
    cin>>b;
    int x = strlen(b);
    int m=0,c=0;
    for(int j=0;j<i;j++){
            if(a[j] == b[m]){
                m++;
            }else{
                m=0;
            }
            if(m == x){
                cout<<"String found";
                return 0;
            }
    }
    cout<<"String not found";
}
