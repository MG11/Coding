#include <iostream>
#include "stack.h"
//#include "stack_using_dynamic_array.h"
//#include "stack_using_ll.h"
using namespace std;

int main(){
    //stack_using_node<int> s;
    //stack s;
    stack s;


    for(int i=0;i<25;i++){
        s.push(i);
    }
    stack t(s);

    for(int i=0;i<25;i++){
        cout<<s.pop()<<endl;
    }
}
