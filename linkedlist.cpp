#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* nextptr;

    Node(int val) {
        data = val;
        nextptr = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public:
    List() {
        head = NULL;
        tail = NULL;
    }
    //insert or add at front
    void push_front(int val) { //insert at front
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->nextptr = head;
            head = newNode;
        }
    }

    //insert or add at back
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->nextptr = newNode;
            tail = newNode;
        }
    }

    //pop front or delete at front
    void pop_front() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        } else {
            Node* temp = head;
            head = head->nextptr;
            temp->nextptr = NULL;

            delete temp;
        }
    }

    //pop back or delete at back
    void pop_back() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }  else {
            Node* temp = head;
            while (temp->nextptr != tail) {
                temp = temp->nextptr;
            }
            delete temp->nextptr;
            temp->nextptr = NULL;
            tail = temp;
        }
    }

    // INSERT AT MIDDLE OR ADD AT MIDDLE
    void insert(int val, int pos) {
        if(pos<0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if (pos == 1) {
            push_front(val);
        } else {
            Node* temp = head;
            for (int i = 1; i < pos - 1; i++) {
                temp = temp->nextptr;
            }
            Node* newNode = new Node(val);
            newNode->nextptr = temp->nextptr;
            temp->nextptr = newNode;
        }
    }


    void print_ll(){
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->nextptr;
        }
        cout << endl;
    }
};


int main() {

    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.insert(4, 2);
   
    l1.print_ll();

    return 0;
}