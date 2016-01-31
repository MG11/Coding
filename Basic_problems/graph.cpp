/*Starting from point (0,0) on a plane, we have written all non-negative integers 0, 1, 2,... as
shown in the figure. For example, 1, 2, and 3 has been written at points (1,1), (2,0), and (3, 1)
respectively and this pattern has continued You are to write a pseudo-code that reads the coordinates
 of a point (x, y), and writes the number (if any) that has been written at that point. (x, y)
 coordinates in the input are in the range 0...100000
*/

#include <iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"Enter the values of x and y";
    cin>>x>>y;

    if(x==y || y ==(x-2)){
        if(x%2 == 0){
            cout<<x+y;
        }else{
            cout<<(x+y-1);
        }
    }else{
        cout<<"No value at this position";
    }
}
