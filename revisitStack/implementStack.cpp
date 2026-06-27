#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int arr[N];
int top = -1;

void push(int val) {
    if (top >= N - 1) {
        cout << "Stack Overflow\n";
        return;
    }

    arr[++top] = val;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }

    top--;
}

void display() {
    if (top == -1) {
        cout << "Stack is Empty\n";
        return;
    }

    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(34);
    push(67);
    push(90);

    display();   // 90 67 34

    pop();

    display();   // 67 34

    return 0;
}
