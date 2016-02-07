/*Given a string, compute recursively a new string where all the 'x' chars have been
removed.
noX("xaxb") → "ab"
noX("abc") → "abc"
noX("xx") → ""
*/

#include <iostream>
#include <cstring>
using namespace std;

void remove_x(char* a,int l){

    if(a[0] == '\0')
        return;

    if(a[0] =='x'){
        for(int i=0;i<l;i++){
                a[i] = a[i+1];
        }
        remove_x(a,l-1);
    }else{
        remove_x(a+1,l-1);
    }
}

int main(){
    char a[100000];
    cin>>a;

    remove_x(a,strlen(a));

    cout<<a;
}
