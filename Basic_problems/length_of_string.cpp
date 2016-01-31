/*Read a string from the user and calculates its length.*/

#include <iostream>
using namespace std;

int main(){
    char a[100];
    int i;
    cout<<"Enter a string";
    cin>>a;

    for(i=0;a[i] != '\0';i++){}

    cout<<i;
}
