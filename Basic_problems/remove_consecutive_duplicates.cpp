/*Write a program to remove consecutive duplicates from a string.*/

#include<iostream>
using namespace std;

int main(){
    char a[100];

    cin>>a;
    int i=0;
    while(a[i] != '\0'){
        if(a[i]==a[i+1]){
            for(int j=i;a[j] != '\0';j++){
                a[j] = a[j+1];
            }
        }else{
            i++;
        }
    }

    cout<<a;
}
