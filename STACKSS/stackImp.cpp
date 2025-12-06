#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    
    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    
    bool isEmpty() {
        return top == -1;
    }

    
    bool isFull() {
        return top == capacity - 1;
    }

    
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();
    s.pop();

    cout << "Top element: " << s.peek() << "\n";

    cout << "Popped: " << s.pop() << "\n";
    cout << "Popped: " << s.pop() << "\n";

    cout << "Is empty? " << (s.isEmpty() ? "Yes" : "No") << "\n";

    return 0;
}
