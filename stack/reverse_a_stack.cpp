//Reverse a Stack with the help of another empty stack .


#include<iostream>
#include "stack_using_node.h"
using namespace std;

void insertAtBottom(stack_using_node<int> &s,int data){
    if(s.isEmpty())
        s.push(data);
    else{
        int top = s.pop();
        insertAtBottom(s,data);
        s.push(top);
    }
}

void stackReverse(stack_using_node<int> &s){

    if(s.isEmpty())
        return;
    int top = s.pop();
    stackReverse(s);
    insertAtBottom(s,top);
}

int main(){
    int x;
    stack_using_node<int> s,t;

    for(int i=0;i<5;i++){
        cout<<"Enter "<<i<<"th element";
        cin>>x;
        s.push(x);
    }

    stackReverse(s);

    for(int i=0;i<5;i++){
        cout<<s.pop()<<endl;
    }
}
