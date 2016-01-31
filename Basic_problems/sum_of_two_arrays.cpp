/*You are given two arrays. Find the sum of the two arrays and put the result in
another array. e.g. if you are given [1,2,4] and [4,5,6] the output should be [5,8,0].*/

#include <iostream>
using namespace std;

int main(){
    int ar1[100],ar3[100],ar2[100],n,i,j,c=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>ar1[i];
    }

    for(i=0;i<n;i++){
        cin>>ar2[i];
    }

    for(int i=n-1;i>=0;i--){
        int d= ar1[i]+ar2[i]+c;
        ar3[i+1] = d%10;
        c = d/10;
    }
    ar3[0] = c;

    for(int i=0;i<=n;i++){
        cout<<ar3[i]<<"\t";
    }
}
