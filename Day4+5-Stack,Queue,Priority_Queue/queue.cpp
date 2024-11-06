#include <iostream>
#define MAX 100

class Queue {
private:
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear >= MAX - 1) {
            std::cout << "Queue overflow!" << std::endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

    int dequeue() {
        if (front == -1) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        int dequeuedValue = arr[front];
        if (front >= rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return dequeuedValue;
    }

    bool isEmpty() {
        return front == -1;
    }

    int peek() {
        if (front == -1) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front element: " << queue.peek() << std::endl;
    std::cout << "Dequeued element: " << queue.dequeue() << std::endl;
    std::cout << "Front element after dequeue: " << queue.peek() << std::endl;

    return 0;
}
