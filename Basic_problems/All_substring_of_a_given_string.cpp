/*Write a program to print all substrings of a given string.*/

#include <iostream>
using namespace std;

int main(){
    char arr[100];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){//length
        for(int k=0;k<n-i+1;k++){//start_point
                for(int j=k;j<(i+k);j++){
                    cout<<arr[j];
                }cout<<endl;
        }
    }
}
