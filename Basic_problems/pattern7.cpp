
/*
1
11
121
1221
12221

*/

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(j==0 ||j==i)
                cout<<1;
                else{
                    cout<<2;
                }
        }cout<<endl;
    }
}
