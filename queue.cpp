#include <iostream>
using namespace std;

#define MAX 3
int myQueue[MAX];
int front = -1;
int rear = -1;

int isFull(){
    return rear == MAX - 1;
}
int isEmpty(){
    return front == -1 || front > rear;
}

void enqueue(int value){
    if (isFull())
    {
        cout << " Queue Overflow " << endl;
        return;
    }
    if(isEmpty()){
        front = 0;
    }
     myQueue[++rear] = value;
    
    
}

void dequeue(){
    if (isEmpty())
    {
        cout << " Queue Undeflow" << endl;
        return;
    } else {
        front++;
    }
    
}

int peek(){
    if (isEmpty())
    {
        cout << " Queue is Empty" << endl;
        return -1;
    }else {
        return myQueue[front];
    }
    
}

void display(){
    if (isEmpty())
    {
        cout << " Queue is Empty" << endl;
    } else {
        for (int i = front; i <= rear; i++)
        {
            cout << myQueue[i] << " "; 
        }
        cout << endl;
        
    }
    
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    



    display();
    // int top = peek();
    // cout << " The top is " << top << endl;

    return 0;
}