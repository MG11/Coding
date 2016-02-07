//Merge two sorted arrays into a third array.

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

    int ar1[100],ar2[100],ar3[1000],i,j,n,c=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }

    for(int j=0;j<n;j++){
        cin>>ar2[j];
    }

    insertion_sort(ar1,n);
    insertion_sort(ar2,n);

    for(i=0,j=0;i<n && j<n;){
        if(ar1[i]>ar2[j]){
            ar3[c] = ar2[j];
            j++;c++;
        }else if(ar1[i] == ar2[j]){
            ar3[c++] = ar1[i];
            ar3[c] = ar1[i];
            i++;
            j++;
            c++;
        }else{
            ar3[c] = ar1[i];
            i++;
            c++;
        }
    }

        for(int k=j;k<n;k++){
            ar3[c] = ar2[k];
            c++;
        }

        for(int k=i;k<n;k++){
            ar3[c] = ar1[k];
            c++;
        }

    for(int i=0;i<c;i++){
        cout<<ar3[i]<<"\t";
    }

}
