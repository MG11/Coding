#include <iostream>
//#include "stack.h"
//#include "stack_using_node.h"
#include "stack_using_ll.h"
using namespace std;

int main(){
    //stack_using_node<int> s;
    //stack s;
    stack_using_ll s;

    for(int i=0;i<5;i++){
        s.push(i);
    }

    for(int i=0;i<5;i++){
        cout<<s.pop()<<endl;
    }
}
