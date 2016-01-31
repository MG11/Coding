/*  1
   232
  34543
 4567654
567898765
*/

#include<iostream>
using namespace std;

int main(){

    int i,j,k;

    for(i =1;i<=5;i++){
            k = i;
        for(j = 1;j<=(5-i);j++)
            cout<<" ";
        for(j = 1;j<=i;j++){
            cout<<k++;
        }
        k = k-2;

        for(int l =1;l<i;l++){
            cout<<k--;
        }
        cout<<endl;
    }

}
