/*Given a string, compute recursively a new string where identical chars that are
adjacent in the original string are separated from each other by a "*".
pairStar("hello") → "hel*lo"
pairStar("xxyy") → "x*xy*y"
pairStar("aaaa") → "a*a*a*a"

*/

#include <iostream>
#include <cstring>
using namespace std;

void l_string_l(char* a){

    if(a[0]=='\0')
        return;

    if(a[0] == a[1]){
            for(int i=strlen(a);i >= 1;i--){
                a[i+1] = a[i];
            }
            a[1] ='x';
            l_string_l(a+2);
    }else{
        l_string_l(a+1);
    }
}

int main(){

    char a[100000];
    cin>>a;

    l_string_l(a);

    cout<<a;
}
