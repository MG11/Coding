/*Given 2N+1 numbers out of which N are duplicate find the non-duplicate number.*/

#include <iostream>
using namespace std;

int main(){
    int arr[100],store[100]={0},n,i,j;
    n= 11;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        store[arr[i]]++;
    }

    for(int i=0;i<100;i++){
        if(store[i]==1){
            cout<<i;
            break;
        }
    }
}
