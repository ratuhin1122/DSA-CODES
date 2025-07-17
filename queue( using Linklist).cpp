#include <iostream>
using namespace std;


class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
};

class Queue {
    public:
        Node* head;
        Node* back;

        Queue() {
            head = NULL;
            back = NULL;
        }

        void push(int val) {
            Node* n = new Node(val); // creating a new node
            if (empty())
            {
                head = n;// first node
                back = n;// first node
            } else {
                
                back->next = n;// adding a new node
                back = n;// adding a new node

            }
            
        };

        void pop() {
            if (empty())
            {
                cout << "Queue is empty" << endl;
            } else {
                Node* toDelete = head;
                head = head->next;
                delete toDelete;
            }
        };

        int front() {
            if (empty())
            {
                cout << "Queue is empty" << endl;
                return -1;
            } else {
                return head->data;
            }
        };

        bool empty() {
            return head == NULL;// or back == NULL or both
        };
};


int main() {

    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    q1.pop();
    q1.pop();
    

    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;

    return 0;
}