
// using Contest Method Stack Implementation


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;

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