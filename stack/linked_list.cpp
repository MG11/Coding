#include <iostream>
//#include "Node.h"
using namespace std;
class LinkedList;

class Node{
public:
        int data;
        Node* next;

        Node(int data):data(data){
            next = NULL;
        }
        friend class LinkedList;

};

class LinkedList {
	Node* head;
	public:
	LinkedList():head(NULL) {
	}

    int returnfirstelement(){
        return head->data;
    }

	LinkedList(LinkedList const & s) {
		this->head = NULL;
		Node* temp = s.head;
		Node* tail = NULL;
		while (temp != NULL) {
			Node* newNode = new Node(temp->data);
			if (this->head == NULL) {
				this->head = newNode;
			} else {
				tail->next = newNode;
			}
			tail = newNode;
			temp = temp->next;
		}
	}
	// TODO assignment operator overload
	private:
	static int findElementRHelper(Node* node, int data) {
		if (node == NULL)
			return -1;
		if (node->data == data)
			return 0;
		int smallAns = findElementRHelper(node->next, data);
		if (smallAns == -1)
			return -1;
		else
			return 1 + smallAns;
	}
	public:
	int findElementR(int data) {
		return findElementRHelper(head, data);
	}

	int findElement(int data) {
		Node* temp = head;
		int position = 0;
		while (temp != NULL) {
			if (temp->data == data) {
				return position;
			}
			temp = temp->next;
			position++;
		}
		return -1;
	}

	private:
	Node* midPointNode() {
		if (head == NULL)
			return NULL;
		Node* slow = head;
		Node* fast = head;
		// Node* fast = head->next;
		// while (fast != NULL && fast->next != NULL)
		while (fast->next != NULL && fast->next->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	public:
	int midPoint() {
		if (head == NULL)
			return -1;
		Node* midNode = midPointNode();
		return midNode->data;
	}

	void addAtBeginning(int data) {
		Node* newNode = new Node(data);
		newNode->next = head;
		head = newNode;
	}

	void bubbleSort() {
		int l = length();
		for (int i = 0; i < l; i++) {
			Node* prev = NULL;
			Node* current = head;
			while (current != NULL && current->next != NULL) {
				if (current->data > current->next->data) {
					if (prev == NULL) {
						Node* nextNode = current->next;
						current->next = current->next->next;
						nextNode->next = current;
						head = nextNode;
						prev = nextNode;
					} else {
						Node* nextNode = current->next;
						current->next = current->next->next;
						prev->next = nextNode;
						nextNode->next = current;
						prev = nextNode;
					}
				} else {
					prev = current;
					current = current->next;
				}
			}
		}
	}





    int deletetopelement(){
            if(length()==0)
                return -1;

            Node* t = head->next;
            int tobereturned = head->data;
            delete head;
            head = t;
            return tobereturned;
    }

	void insertAtIth(int data, int position) {
		if (position == 0) {
			addAtBeginning(data);
			return;
		}
		int currentPosition = 0;
		Node* temp = head;
		while (currentPosition < position - 1) {
			currentPosition++;
			temp = temp->next;
			if (temp == NULL)
				break;
		}

		if (temp == NULL) {
			cout << "index too large" << endl;
			return;
		}

		Node* newNode = new Node(data);
		newNode->next = temp->next;
		temp->next = newNode;
	}


	void deleteAtBeginning() {
		if (head == NULL)
			return;
		Node* temp = head->next;
		delete head;
		head = temp;
	}

	private:
	static int lengthRecursiveHelper(Node* node) {
		if (node == NULL)
			return 0;
		return 1 + lengthRecursiveHelper(node->next);
	}

	public:
	int lengthRecursive() const {
		return lengthRecursiveHelper(head);
	}

	int length() const {
		int l = 0;
		Node* temp = head;
		while (temp != NULL) {
			l++;
			temp = temp->next;
		}
		return l;
	}

	LinkedList& operator+=(LinkedList const & b) {
		if (this->head == NULL) {
			*this = b;
			return *this;
		}

		Node* tail = this->head;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		// LinkedList temp(b);
		//tail->next = temp.head;
		// temp.head = NULL;
		Node* temp = b.head;
		while (temp != NULL) {
			Node* newNode = new Node(temp->data);
			tail->next = newNode;
			tail = newNode;
			temp = temp->next;
		}
		return *this;
	}

	LinkedList operator+(LinkedList const & b) const {
		LinkedList output(*this);
		Node* temp = b.head;
		while (temp != NULL) {
			int l = output.length();
			output.insertAtIth(temp->data, l);
			temp = temp->next;
		}
		return output;
	}

	void print() const {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << "-->";
			temp = temp->next;
		}
		cout << endl;
	}

	~LinkedList() {
		while (head != NULL) {
			Node* temp = head->next;
			delete head;
			head = temp;
		}
	}
};

void takeInput(LinkedList& a) {
	int temp;
	cout << "Enter next" << endl;
	cin >> temp;
	while (temp != -1) {
		a.addAtBeginning(temp);
		cout << "Enter next" << endl;
		cin >> temp;
	}
}
/*
int main() {
	LinkedList l1,l2;
	// l1.merge(l2);
	LinkedList l3 = LinkedList::merge(l1,l2);
	LinkedList a;
	takeInput(a);
	a.print();
	a.bubbleSort();
	a.print();
}*/
