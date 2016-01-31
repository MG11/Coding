/*
1
11
111
1001
11111
*/

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){//lines
        for(int j=0;j<=i;j++){//no_of_elements
            if(i%2 == 0)
                cout<<"1";
            else{
                if(j==0 || j==i)
                    cout<<"1";
                else
                    cout<<"0";
            }
        }cout<<endl;
    }
}
