/*You are given S a sequence of n integers S = s 1 , s 2 , ..., s n . Please, compute if it is
possible to split S into two parts: s 1 , s 2 , ..., s i and s i+1 , s i+2 , ..., s n (1 <= i < n) in such
a way that the first part is strictly decreasing while the second is strictly increasing
one. First take n as input and then take n more integers, Output yes or no.*/

#include <iostream>
using namespace std;

int main(){
    int arr[100],i,n;

    cout<<"Enter n";
    cin>>n;

    for(i = 0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]= -10000;

    i=0;
    while(i<n){
        if(arr[i]<arr[i+1])
            break;
            i++;
    }
    if(i==n-1){
        cout<<"No.";
    }
    while(i<n){
        if(arr[i]>arr[i+1]){
            break;
        }i++;
    }

    if(i==n-1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}
