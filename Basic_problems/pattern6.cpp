/*
1
11
202
3003
40004
*/

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j==0 ||j==i)
                cout<<i;
            else
                cout<<0;
        }cout<<endl;
    }
}
