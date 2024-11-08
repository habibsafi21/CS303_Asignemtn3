#include <iostream>
#include <queue>

template <typename T>
class Queue {
private:
    std::queue<T> q;

public:
    void push(T value) {
        q.push(value);
    }

    void pop() {
        if (!q.empty()) {
            q.pop();
        }
    }

    T front() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }

    void moveFrontToRear() {
        if (!q.empty()) {
            T frontElement = q.front();
            q.pop();
            q.push(frontElement);
        }
    }

    void displayQueue() {
        std::queue<T> tempQueue = q;
        while (!tempQueue.empty()) {
            std::cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue<int> queue;
    for (int i = 1; i <= 10; i++) {
        queue.push(i);
    }

    std::cout << "Initial Queue: ";
    queue.displayQueue();

    queue.moveFrontToRear();

    std::cout << "After moving front to rear: ";
    queue.displayQueue();

    return 0;
}