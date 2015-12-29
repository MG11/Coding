#include <iostream>
using namespace std;

class linkedlist;

class Node{
 public:
    int data;
    Node* next;

 Node (int data):data(data){
    next = NULL;
 }
 friend class linkedlist;
};

class linkedlist{
    Node* head;

public:
    linkedlist(){
        head = NULL;
    }


    void addatbeginning(int data){
        Node* newnode = new Node(data);
        if(head==NULL)
            head = newnode;
        else{
            Node* temp = head;
            head = newnode;
            newnode->next = temp;
        }
    }

    linkedlist(linkedlist const &a){
        this->head = NULL;
        Node* temp = a.head;
        Node* tail = NULL;
        while(temp != NULL){
            Node* newnode = new Node(temp->data);
            if(this->head==NULL){
                head = newnode;


            }else{
                    tail->next = newnode;

            }
            temp = temp->next;
            tail = newnode;
        }
    }
    int length(){
        int l = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp->next;
            l++;
        }
        return l;
    }

    void addatend(int data){
        if(head == NULL){
            addatbeginning(data);
        }else{
            Node*temp = head;
            Node* newnode = new Node(data);
            while(temp->next != NULL){
                    temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    void insertatith(int data,int i){
        int l = length();
        if(i>=l){
            addatend(data);
            return;
        }
        if(i<=0){
            addatbeginning(data);
            return;
        }
    Node* temp = head;
    for(int l = 0;l<i-1;l++){
            temp = temp->next;
    }
        Node* newnode = new Node(data);
        newnode->next = temp->next;
        temp->next = newnode;
}

void print(){

    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"--->";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteatbeginning(){

    if(head==NULL)
        return;

    Node* temp = head->next;
    delete head;
    head = temp;
}

linkedlist operator+(linkedlist const &a)const{
    linkedlist output(*this);
        Node* temp = a.head;

        while(temp != NULL){
            output.addatend(temp->data);
            temp = temp->next;
        }
    return output;
}

linkedlist& operator+=(linkedlist const &a){
    if(a.head == NULL)
        return *this;

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* temp1 = a.head;

    while(temp1 != NULL){
        Node* newnode = new Node(temp1->data);
        temp->next = newnode;
        temp = newnode;
        temp1 = temp1->next;
    }
    return *this;
}

linkedlist& operator=(linkedlist const &a){

       while(head != NULL){
            Node* t = head->next;
            delete head;
            head = t;
        }

        Node* temp = a.head;
        Node* prev = NULL;

        while(temp != NULL){
               Node* newnode = new Node(temp->data);
               if(head==NULL){
                    head = newnode;
                    prev = newnode;
               }else{
                    prev->next = newnode;
                    prev = newnode;
               }

               temp = temp->next;
        }
        return *this;
}

int findelement(int data){
     if(head==NULL)
            return -1;

     Node* temp = head;
     int l=-1;
     while(temp != NULL){
        if(temp->data == data)
            return l+1;
        temp = temp->next;
        l++;
     }
     return -1;
}
private:
 static int findelementrecursivehelper(Node* head,int data){
        if(head ==NULL)
            return -1;
        if(head->data==data)
            return 0;
        else{
            int l= findelementrecursivehelper(head->next,data);
            if(l==-1)
                return -1;
            else{
                return 1+l;
            }
        }
}

static int lengthrecursiveHelper(Node* head){
    if(head==NULL)
        return 0;
    return 1+lengthrecursiveHelper(head->next);
}

static void printreversehelper(Node* head){
    if(head == NULL)
        return;

    printreversehelper(head->next);
    cout<<head->data<<"-->";
    return;
}

public:
    void iterativereverse(){

        Node * current = head;
        Node* prev = NULL;

        while(current){
            Node* temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        head = prev;
}


void deleteatend(){
    if(head==NULL)
        return;

    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}


//check_pallindrome.

bool checkpallindrome(){

    if(head == NULL)
        return true;

    int l = length();
    Node* temp = head;
    for(int i=0;i<(l/2)-1;i++){
        temp = temp->next;
    }
    if(l%2 != 0)
        temp = temp->next;

    Node * prev = NULL;
    Node* current = temp->next;

    while(current){
        Node* newn = current->next;
        current->next = prev;
        prev = current;
        current = newn;
    }
    temp->next = prev;

    Node* temp1 = head;
    while(temp->next != NULL){
            if(temp1->data != temp->next->data)
                return false;
            temp1 = temp1->next;
            temp = temp->next;
    }
    return true;
}

int findelementR(int data){
    int c = findelementrecursivehelper(head,data);
    return c;
}

int findmid(){
    if(head==NULL)
        return -1;

    int l = length();

    Node* temp = head;
    int i=0;

int k = l-1;

    for(int i=0;i<(k/2);i++){
        temp = temp->next;
    }
    return temp->data;
}

int lengthrecursive(){
    int c = lengthrecursiveHelper(head);
    return c;
}

void printreverse(){
    printreversehelper(head);
    cout<<endl;
}


//bubble_sort!
void bubble_sort__ll(){

    if(head==NULL)
        return;


    int l = length();

    for(int i=0;i<l;i++){

            Node* prev = NULL;
            Node* current = head;

            while(current != NULL && current->next != NULL){
                if(current->data > current->next->data){
                    if(prev == NULL){
                             head = current->next;
                            Node* temp = head->next;
                            head->next = current;
                            current->next = temp;
                            prev = head;
                    }else{
                        Node* temp = current->next;
                        current->next = current->next->next;
                        temp->next = current;
                        prev->next = temp;
                        prev = temp;
                    }
                }else{
                    prev = current;
                    current = current->next;
                }
            }
    }
}

//bubble_sort using swapping the data.

void bubble_sort_swapping_data(){
    Node* current = head;
    if(head==NULL)
        return;

    int l = length();

    for(int i = 0;i<l;i++){
            Node* current = head;
            while(current != NULL && current->next != NULL){
                if(current->data>current->next->data){
                        int t = current->data;
                        current->data = current->next->data;
                        current->next->data = t;
                }
                current = current->next;
            }
    }
}

// Eliminate duplicate from sorted linkedlist.
void eliminate_duplicate(){

    if(head == NULL)
        return;

    Node* temp = head;
    //Node* prev = NULL;

        while(temp != NULL && temp->next != NULL){
            if(temp->data == temp->next->data){
                Node* t = temp->next->next;
                delete temp->next;
                temp->next = t;
            }else{
                temp = temp->next;
            }
        }
}

linkedlist& operator+(int data){
    Node* temp = head;
    Node* newnode = new Node(data);

    if(head==NULL){
        head  = newnode;
        return   *this;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return *this;
}

    ~linkedlist(){
        while(head != NULL){
                Node* temp = head->next;
                delete head;
                head = temp;
        }
    }
};
int main(){
    linkedlist l;

    int x;
    cout<<"Enter the elements of linkedlist";
    cin>>x;
    int a;
    for(int i=0;i<x;i++){
        cin>>a;
        l.addatbeginning(a);
    }



    l.insertatith(5,2);
    l.deleteatbeginning();
    l.addatbeginning(8);*/
    l.addatend(3);
    linkedlist b(l);
    b.print();
    linkedlist c(b+l);
    b.print();
    c.print();
    l.print();

    c +=b;
    c.print();

    c = l;

    c.print();

    c+5;
    c.print();

    int pos = l.findelement(6);
    cout<<pos<<endl;

    pos = l.findelementR(5);
    cout<<pos<<endl;

    int mid = l.findmid();
    cout<<mid<<endl;

    int len = l.lengthrecursive();
    cout<<len<<endl;

    l.bubble_sort_swapping_data();
    l.print();

    l.bubble_sort__ll();
    l.print();

    l.eliminate_duplicate();
    l.print();

    l.printreverse();

    l.iterativereverse();
    l.print();

    l.deleteatend();
    l.print();

    int d = l.checkpallindrome();
    cout<<d<<endl;
}
