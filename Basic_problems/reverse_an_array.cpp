/*Given an array, reverse it. You can’t create another array.*/

#include <iostream>
using namespace std;

int main(){
    int arr[100],n;

    cout<<"Enter n";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0,j=n-1;i<=(n/2),j>=(n/2);i++,j--){
            int c = arr[i];
            arr[i] = arr[j];
            arr[j] = c;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
