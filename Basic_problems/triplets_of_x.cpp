/*Given an array of integers A and an integer x. Find triplets of elements in A which
sum to x*/

#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int j;
    for(int i=1;i<n;i++){
        int key = arr[i];
        for( j=i-1;j>=0;j--){
            if(arr[j]>=key){
               arr[j+1]=arr[j];
            }else{
                break;
            }
        }arr[j+1] = key;
    }
}

int main(){
    int arr[100],n,x,c=0;

    cout<<"Enter n and x";
    cin>>n>>x;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    insertion_sort(arr,n);
    for(int k=0;k<n;k++){
    for(int i=0,j=n-1;i<=n,j>=0;){
            if(arr[i]+arr[j]+arr[k]==x && i!=j && j!=k){
                    cout<<arr[i]<<"\t"<<arr[j]<<"\t"<<arr[k]<<"\n";
                i++;
                j--;
            }


            if(arr[i]+arr[j]+arr[k]<x){
                i++;
            }

            if(arr[i]+arr[j]+arr[k]>x){
                j--;
            }
        }cout<<c++;
    }
}
