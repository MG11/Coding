/*Print all leap years b/w 2000 & 3000 (both inclusive)*/

#include <iostream>
using namespace std;

int main(){


    for(int i=2000;i<=3000;i++){

        if(i%4 != 0){
            continue;
        }else{
            if(i%100==0){
                    if(i%400 ==0)
                    cout<<i<<"\t";
            }else{
                cout<<i<<"\t";
            }
        }
    }
}


