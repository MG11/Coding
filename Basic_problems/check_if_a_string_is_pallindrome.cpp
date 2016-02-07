/*Use recursion to check if a given String is palindrome or not.*/

#include <iostream>
#include <cstring>
using namespace std;

bool check_pallindrome(char* a,int l){
    if(l==0||l==1)
        return 1;

    if(a[0] != a[l]){
        return 0;
    }else{
        return check_pallindrome(a+1,l-2);
    }
}
int main(){

    char a[10000];
    cin>>a;
    int l = strlen(a)-1;

    bool c = check_pallindrome(a,l);

    cout<<c;
}
