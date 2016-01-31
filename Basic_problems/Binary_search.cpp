//Binary Search

#include <iostream>
using namespace std;

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
    int arr[100],x,n,i,j;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    cout<<"Enter the element to be searched";
    cin>>x;

    for(int i=0,j=n-1;i<=j;){

        int mid = (i+j)/2;

        cout<<mid<<"\t";
        if(arr[mid]==x){
            cout<<"At position "<<mid;
            return 0;
        }else if(arr[mid]>x){
            j=mid-1;
        }else{
            i = mid+1;
        }
    }
    cout<<"Element not found";
}
