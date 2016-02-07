/*Write a function get a substring of a
    return x;String*/

#include <iostream>
using namespace std;

char*substring(char a[],int i,int j){
    char x[100];
    int c=0;

   for(int k = i;k <= j;k++){
        x[c++] = a[k];
   }x[c] = '\0';
   return x;
}

int main(){
    char a[100];
    char* b;
    int i,j;

    cout<<"Enter the string";
    cin>>a;

    cout<<"Enter the positions of the substring";
    cin>>i>>j;

     b = substring(a,i,j);
    cout<<b<<'\n';

}
