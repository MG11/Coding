/*Implement Selection, Insertion and Bubble sorts.*/

#include<iostream>
using namespace std;

//o(n^2)
void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
}

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
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int c = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = c;
            }
        }
    }
}
int main(){
    int arr[100],n,i,j;

    cout<<"Enter element number";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection_sort(arr,n);
    //insertion_sort(arr,n);
    bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
