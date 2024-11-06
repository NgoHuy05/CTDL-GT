#include <iostream>
#define MAX 100

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            std::cout << "Stack overflow!" << std::endl;
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Stack is empty!" << std::endl;
            return -1;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    int peek() {
        if (top == -1) {
            std::cout << "Stack is empty!" << std::endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;
    std::cout << "Popped element: " << stack.pop() << std::endl;
    std::cout << "Top element after pop: " << stack.peek() << std::endl;

    return 0;
}
