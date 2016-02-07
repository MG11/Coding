/*Write a recursive function to convert a String into the number it represents. e.g. for input “1231” you should return integer 1231.*/

#include <iostream>
#include <cstring>
using namespace std;

int c = 0;

int convert_to_number(char* a){
    if(a[0] == '\0')
        return c;

    c = (a[0]-'0')+c*10;

     convert_to_number(a+1);

}
int main(){

    char a[10000];
    cin>>a;

    int num = convert_to_number(a);
    cout<<num;
}

