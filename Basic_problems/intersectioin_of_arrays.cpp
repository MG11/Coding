//Given two arrays return their intersection.

#include <iostream>
using namespace std;

//selection_sort
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

    int ar1[100],ar2[100],ar3[100],n,c=0;

    cout<<"Enter the number of element";
    cin>>n;

    for(int i =0;i<n;i++){
        cin>>ar1[i];
    }

    for(int i=0;i<n;i++){
        cin>>ar2[i];
    }

    sort(ar1,n);
    sort(ar2,n);

    for(int i=0,j=0;i<n,j<n;){
        if(ar1[i]==ar2[j]){
            ar3[c++] = ar1[i];
            i++;
            j++;
        }
        if(i==n ||j==n)
            break;
        if(ar1[i]<ar2[j])
            i++;

        if(ar1[i]>ar2[j])
            j++;
    }

    for(int i=0;i<c;i++){
        cout<<ar3[i]<<"\t";
    }
}

