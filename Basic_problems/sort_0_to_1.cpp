/*You are given with an array containing only 0’s and 1’s. Write a function to sort this array. Do it in one pass, this means you can’t
first find the count of 0’s and 1’s in one pass and update the array in second pass.*/

#include <iostream>
using namespace std;

int main(){

    int arr[100],n,i,j;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for( j=0;j<n;j++){
            if(arr[j]==1)
                break;
        }

    if(arr[i]>arr[i+1]){
            arr[i+1]++;
            arr[j]--;
    }
}


    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
