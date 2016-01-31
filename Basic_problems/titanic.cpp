/*The captain of the ship TITANIC is a little .... off the track. He needs to select the crew for the
ship. But everyone seems to be eligible. So to test their intelligence, he plays a game.
The contestants have to stand in a line. They are given the numbers in the order in which they
stand, starting from 1. The captain then removes all the contestants that are standing at an
odd position.
Initially, standing people have numbers - 1,2,3,4,5...
After first pass, people left are - 2,4,...
After second pass - 4,...
And so on.
You want to board the ship as a crew member. Given the total number of applicants for a
position, find the best place to stand in the line so that you are selected.
*/

#include <iostream>
using namespace std;

int main(){
    int N;

    cout<<"Enter the number N";
    cin>>N;

    int a = 2;

    while(a<N){
        a = a*2;
    }
    cout<<a/2;
}
