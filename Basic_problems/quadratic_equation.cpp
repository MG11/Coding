/*Write a program to calculate the roots of a quadratic equation ax 2 +bx +c=0, display
them on the screen specifying their nature.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter the values of the quadratic equation";
    cin>>a>>b>>c;

    cout<<(-b+sqrt(b*b-4*a*c))/2.0*a<<"\t";
    cout<<(-b-sqrt(b*b-4*a*c))/2.0*a;

}
