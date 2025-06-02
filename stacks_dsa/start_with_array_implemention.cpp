#include <iostream>
using namespace std;

class stackImp {
    int stack[100]; 
    int top;

public:
    stackImp() {
        top = -1;
    }

    void push(int val) {
        if (top >= 99)
            cout << "Stack Overflow\n";
        else
            stack[++top] = val;
    }

    void pop() {
        if (top < 0)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return stack[top];
    }

    void display() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    stackImp s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();       
    s.pop();
    s.display();       
    cout << "Top: " << s.peek() << endl; // 20

    return 0;
}
