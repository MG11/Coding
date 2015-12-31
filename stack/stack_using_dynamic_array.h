#ifndef STACK_H
#define STACK_H

class stack{
    int* data;
    int nextElementPosition;
    int maxSize;
public:
    stack(){
        maxSize = 10;
        data = new int[maxSize];
        nextElementPosition = 0;

    }
    stack(int t){
        maxSize = t;
        data = new int[maxSize];
        nextElementPosition = 0;
    }

    stack(stack_using_node const &s){
        this->data = NULL;
        int* temp = s.data;

        this->maxSize = s.maxSize;
        this->nextElementPosition = s.nextElementPosition;

        int* c = new int[s.maxSize];
        for(int i=0;i<nextElementPosition;i++){
            c[i] = temp[i];
        }
        this->data = c;
        c = NULL;
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

        if(nextElementPosition == maxSize){
            int* temp = new int[2*maxSize];

            for(int i=0;i<maxSize;i++){
                temp[i] = data[i];
            }
            maxSize = 2*maxSize;
            delete []data;
            data = temp;
            temp = NULL;
        }
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

    ~stack(){
        delete [] data;
        data = NULL;
    }
};

#endif
