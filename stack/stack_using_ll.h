#ifndef STACK_USING_LL_H
#define STACK_USING_LL_H
#include "linked_list.cpp"
#include <iostream>
using namespace std;


class stack_using_ll{
        LinkedList* data;
    public:
        stack_using_ll(){
            data = new LinkedList();
        }
        void push(int newdata){
            data->addAtBeginning(newdata);
        }

        int pop(){
            return data->deletetopelement();
        }

        int size(){
            return data->length();
        }

        bool isEmpty(){
            if(size()==0){
                return true;
            }
            return false;
        }

        int top(){
            if(size()==0)
                return -1;

            else{
                return data->returnfirstelement();
            }
        }
};

#endif // STACK_USING_LL_H



