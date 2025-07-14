
// using Linked List  to implement stack


#include <iostream>
#include <list>
using namespace std;

class Stack {

    public:
    list<int> ll;

    void push(int val) {
        ll.push_front(val);

    }
    void pop() {
        ll.pop_front();

    }
     int top() {
        return ll.front();

     }

     bool empty(){
        return ll.size() == 0;
        

     }
};


int main() {
    Stack stack;

    // Push
    stack.push(1);
    stack.push(2);
  
  

    //Pop
    stack.pop();


  
    

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
    
   

    return 0;
}