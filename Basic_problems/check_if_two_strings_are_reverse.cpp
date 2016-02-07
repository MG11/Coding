/*Given two Strings check if one is reverse of the other.*/

#include <iostream>
#include <cstring>
using namespace std;

bool check_if_reverse(char* a,char* b,int e){

    if(a[0]=='\0')
        return true;

    if(a[0] == b[e]){
        return check_if_reverse(a+1,b,e-1);
    }else{
        return false;
    }

}
int main(){

    char a[100000],b[100000];
    cin>>a>>b;

    if(strlen(a)!= strlen(b)){
        cout<<0;
        return 0;
    }
    bool c = check_if_reverse(a,b,(strlen(a)-1));

    cout<<c;
}
