
/*
1
11
101
1331
10001

*/

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(i%2 ==0){
                if(j==0 ||j==i)
                    cout<<1;
                else{
                    cout<<0;
                }
            }else{
                if(j ==0 || j==i)
                    cout<<1;
                else{
                    cout<<i;
                }
            }
        }cout<<endl;
    }
}
