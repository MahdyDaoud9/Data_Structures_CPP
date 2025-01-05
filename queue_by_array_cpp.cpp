#include <iostream>
using namespace std;
#define SIZE 5

class queue {
private:
    int rear = -1;
    int front = -1;
    int queue[SIZE];

public:
    void enqueue(int value) {
        if (rear != SIZE - 1) {
            if (front == -1 && rear == -1) {
                front++;
            }
            queue[++rear] = value;
        }
        else {
            cout << "Queue is full. Cannot enqueue!\n";
        }
    }

    void dequeue() {
        if (front != -1 && front <= rear) {
            cout << "Dequeued : " << queue[front++] << "\n";
        }
        else {
            cout << "Queue is empty. Cannot dequeue!\n";
        }
    }

    void display() {
        if (front != -1 && front <= rear) {
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << "\n";
        }
        else {
            cout << "Queue is empty. Cannot display!\n";
        }
    }

    void peek() {
        if (front != -1 && front <= rear) {
            cout << "Peek element :" << queue[front] << "\n";
        }
        else {
            cout << "Queue is empty. Cannot peek!\n";
        }
    }
};

int main() {
    queue queue;
    queue.enqueue(10);   // enqueue 10
    queue.enqueue(20);   // enqueue 20
    queue.enqueue(30);   // enqueue 30
    queue.peek();        // return first element in queue 10
    queue.enqueue(40);   // enqueue 40
    queue.enqueue(50);   // enqueue 50
    queue.peek();        // return first element in queue 10
    queue.display();     // first in first out : 10 20 30 40 50
    queue.enqueue(60);   // queue is full
    queue.dequeue();     // dequeue first 10 element in queue
    queue.dequeue();     // dequeue first 20 element in queue
    queue.display();     // first in first out : 30 40 50
    return 0;
}