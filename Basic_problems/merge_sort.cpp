/*Implement Merge Sort.*/

#include <iostream>
using namespace std;

void merge(int* arr,int l,int m,int r){

    int n1 = m-l+1;
    int n2 = r-m;

    int Left[1000] = {0},Right[1000]={0};

    int c=0;
    for(int i=l;i<n1+l;i++){
        Left[c++] = arr[i];
    }

    c=0;
    for(int j=m+1; j<n2+m+1;j++){
        Right[c++] = arr[j];
    }

    int n1i = 0,n2i = 0,i=l;

    for(i=l;n1i<n1 && n2i<n2; i++){

        if(Left[n1i]<Right[n2i]){
            arr[i] = Left[n1i];
            n1i++;
        }else if(Right[n1i]>Left[n2i]){
            arr[i] = Right[n2i];
            n2i++;
        }else{
            arr[i++] = Left[n1i];
            arr[i] =   Right[n2i];
            n1i++;
            n2i++;
        }
    }

    if(n1i<n1){
        for(int j = i;n1i<n1;j++){
            arr[j] = Left[n1i];
            n1i++;
        }
    }

        if(n2i<n2){
            for(int j=i;n2i<n2;j++){
                arr[j] = Right[n2i];
                n2i++;
            }
        }

}


void merge_sort(int* arr, int l,int r){

        int m = l+(r-l)/2;
        while(l<r){
            merge_sort(arr,l,m);
            merge_sort(arr,m+1,r);
            merge(arr,l,m,r);
        }
}


int main(){

    int arr[1000],n;

    cout<<"Enter the length of the array";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
