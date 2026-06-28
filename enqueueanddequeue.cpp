#include <iostream>
using namespace std;

int front = 0;
int rear = -1;
const int maxsize = 2;
int queue[maxsize];

void enqueue(int val) {
    if (rear >= maxsize - 1) {
        cout << "Queue is Full\n";
    } else {
        rear++;
        queue[rear] = val;
    }
}

void dequeue() {
    if (front > rear) {
        cout << "Queue is Empty\n";
    } else {
        int temp = queue[front];
        front++;
        cout << "Dequeued: " << temp << endl;
    }
}

int main() {

    enqueue(2);
    enqueue(3);

    dequeue();
    dequeue();
    dequeue(); // Queue is Empty

    return 0;
}
