/*Given an array of integers A and an integer x. Find pairs of elements in A which sum
to x.*/

#include <iostream>
using namespace std;

void sort(int ar1[],int n){

    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(ar1[i]>ar1[j]){
                int c = ar1[i];
                ar1[i] = ar1[j];
                ar1[j] = c;
            }
        }
    }
}
int main(){
    int ar[100],n,x;

    cout<<"Enter n and x";
    cin>>n>>x;

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    sort(ar,n);

    for(int i=0,j = n-1;i<j,j>=(n/2);){
            if(ar[i]+ar[j]==x){
                cout<<ar[i]<<"\t"<<ar[j]<<"\n";
                i++;
                j--;
            }
            if(i==n ||j==-1)
                break;
            if(ar[i]+ar[j]<x){
                i++;
            }
            if(ar[i]+ar[j]>x){
                j--;
            }
    }
}
