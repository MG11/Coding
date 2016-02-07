/*Given a string rotate it by n characters. e.g. if the string is CodingBlocks and n =3 then the output should be cksCodingBlo.*/

#include <iostream>
using namespace std;

int main(){
char str[100];
    int i=0,n;

        str[i] = cin.get();

    while(str[i] != '\n'){
        str[++i] = cin.get();
    }

    str[i] = '\0';

    cout<<"Enter the length u want to rotate the string";

    cin>>n;

    if(n>i-1)
        n = i-1;

    for(int k=0;k<n;k++){
             char c=str[n-1];
        for(int j=i-1;j>0;j--){
                str[j]=str[j-1];
        }
        str[0]=c;
    }
    cout<<str;
}
