
// using vector Stack Implementation


#include <iostream>
#include <vector>
using namespace std;

class Stack {

    public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);

    }
    void pop() {
        v.pop_back();

    }
     int top() {
        return v[v.size() - 1]; 

     }

     bool empty(){
        return v.size() == 0;

     }
};


int main() {
    Stack stack;

    // Push
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    //Pop
    stack.pop();
    stack.pop();

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
    
   

    return 0;
}