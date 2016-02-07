/*Count number of zeros in an integer. Use Recursion.*/

#include <iostream>
using namespace std;

int count(int m){
    if(m == 0)
        return 1;
    if(m<10)
        return 0;
    if(m%10==0)
        return 1+count(m/10);
    else{
        return count(m/10);
    }
}



int main(){
    int m;

    cin>>m;

    int c = count(m);
    cout<<c;
}
