#include <iostream>
#include <cstring>
#include "stack_using_node.h"
using namespace std;

bool balanced_paranthesis(char* l,int n){
    stack_using_node <char> s;

    for(int i=0;i<n;i++){
        switch(l[i]){
            case '[': s.push('[');break;
            case '(': s.push('(');break;;
            case '{': s.push('{');break;;

            case ']': if(!s.isEmpty() && s.top() == '['){
                    s.pop();break;}
                    else{
                        return false;
                    }
            case ')': if(!s.isEmpty() && s.top()=='('){
                s.pop();break;}
                else{
                    return false;
                }

            case '}' : if(!s.isEmpty() && s.top()=='{'){
                s.pop();break;}
                else{
                    return false;
                }
                default: continue;
        }
    }
    if(s.isEmpty())
        return true;
    else{
        return false;
    }
}




int main(){

        char input[] = "{ a + [ b+ (c + d)] + (e + f) }";
        bool answer = balanced_paranthesis(input, strlen(input));
        cout<<answer;
}
