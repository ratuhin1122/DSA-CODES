#include <iostream>
using namespace std;

#define MAX 3
int myStack[MAX];
int top = -1;

int isEmpty(){
    return top == -1;
} 
int isFull(){
    return top == MAX - 1;
}

void push(int value){
    if (isFull())
    {
        cout << " Stack Overflow" << endl;
        return;
    } else {
        myStack[++top] = value;
    }
    
}

void pop(){
    if (isEmpty())
    {
        cout << " Stack Underflow" << endl;
        return;
    }else {
        top--;
    }
    
}

int peek(){
    if (isEmpty())
    {
        cout << " Stack is Empty" << endl;
        return -1;
    } else {
        return myStack[top];
    }
    
}

void display(){
    if (isEmpty())
    {
        cout << " Stack is Empty" << endl;
        return;
    }else {
        for(int i = top; i >= 0; i--){
            cout << myStack[i] << " ";
        }
        cout << endl;
    }
    
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    pop();
    pop();
    display();
    // int topVale = peek();
    // cout << " The Top Element is " << topVale << endl;
 

    return 0;
}