
#include <iostream>
#include "Node.h"
using namespace std;

template <typename T>
class stack_using_node{
    Node<T>* head;
    int numnodes;


    public:
    stack_using_node(){
        head = NULL;
        numnodes = 0;
    }

    void push(T data){
        Node<T>* newnode = new Node<T>(data);

            Node<T>* t = head;
            head = newnode;
            newnode->next = t;

        numnodes++;
    }

    T pop(){
        if(head == NULL)
            return -1;

        Node<T>* t = head->next;
        int c = head->data;
        delete head;
        head = t;
        numnodes--;
        return c;

    }

    int top(){
        if(head == NULL)
            return -1;

        return head->data;
    }

    bool isEmpty(){
        if(numnodes==0)
            return true;
        return false;
    }

    int size(){
        return numnodes;
    }


};


