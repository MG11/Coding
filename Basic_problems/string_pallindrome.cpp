/*Check if a given string is palindrome or not.*/

#include <iostream>
using namespace std;

int main(){
    char a[100];

    int i = 0,j = 0;

    cin>>a;

    while(a[i] != '\0')
        i++;


        for(int k=i-1,j=0;k>=0,j<i;k--,j++){
            if(a[k] != a[j]){
                cout<<"Not pallindrome";
                return 0;
            }
        }cout<<"Pallindrome";
}
