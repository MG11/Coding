/*Given a string, compute recursively (no loops) a new string where all appearances of
"pi" have been replaced by "3.14".
changePi("xpix") → "x3.14x"
changePi("pipi") → "3.143.14"
changePi("pip") → "3.14p"
*/

#include <iostream>
#include <cstring>
using namespace std;

void change_to_pi(char* a,int s,int l){

    if(a[s] == '\0'){
        return;
    }

    if(a[s] =='p' && a[s+1] =='i'){

        for(int i = l;i>=s+2;i--){
                a[i+2] = a[i];
        }
    a[s] = '3';a[s+1] = '.';a[s+2] = '1';a[s+3] = '4';
    change_to_pi(a,s+4,l+2);
    }else{
        change_to_pi(a,s+1,l);
    }
}
int main(){

    char a[10000];
    cin>>a;


    change_to_pi(a,0,(strlen(a)));

    cout<<a;
}
