#ifndef STACK_H
#define STACK_H

class stack{
    int* data;
    int nextElementPosition;

public:
    stack(){
        data = new int[100];
        nextElementPosition = 0;
    }

    int size(){
        return nextElementPosition;
    }

    bool isEmpty(){
        if(nextElementPosition==0)
            return true;
        else{
            return false;
        }
    }

    int top(){
        if(nextElementPosition == 0)
            return -1;
        else{
            return data[nextElementPosition-1];
        }
    }

    void push(int d){
        data[nextElementPosition] = d;
        nextElementPosition++;
    }

    int pop(){
        if(nextElementPosition==0)
            return -1;

        else{
            nextElementPosition--;
            return data[nextElementPosition];
        }
    }


};

#endif
