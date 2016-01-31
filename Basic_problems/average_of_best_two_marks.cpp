/*Write a program to input name and marks of three tests of a student and calculate
and print the name and average of best two test marks.*/

#include <iostream>
using namespace std;

int main(){
    int m1,m2,m3;

    cout<<"Enter the marks in three subjects";
    cin>>m1>>m2>>m3;

    int lowest;

    if(m1<m2 && m1<m3){
        lowest = m1;
    }else if(m2<m1 && m2<m3){
        lowest = m2;
    }else{
        lowest = m3;
    }

    cout<<(m1+m2+m3-lowest)/2.0;
}
