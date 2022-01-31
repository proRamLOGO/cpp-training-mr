#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
    
private:
    Node *front, *rear;
    int size;

public:

    Queue() {
        this->front = this->rear = nullptr;
        this->size = 0;
    }

    bool push(int data) {

        if ( this->size == 0 ) {
            this->front = new Node(data);
            this->rear = this->front;
        } else {
            this->rear->next = new Node(data);
            this->rear = this->rear->next;
        }

        this->size++;
        return true;
    }

    bool pop() {
        // if ( this->front == nullptr ) {
        if ( this->size == 0 ) {
            // UNDERFLOW
            cout << "UNDERFLOW";
            return false;
        } 

        this->front = this->front->next;

        if ( this->front == nullptr )
            this->rear = nullptr;

        this->size--;
        return true;
    }

    int getSize() {
        return this->size;
    }
    int getFront() {
        if ( this->size == 0 ) {
            return -1;
        }
        return this->front->data;
    }
    int getRear() {
        if ( this->size == 0 ) {
            return -1;
        }
        return this->rear->data;;
    }

};


int main() {


    Queue q;

    q.push(20);
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.push(25);
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.pop();
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.pop();
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.push(30);
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.pop();
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;

    q.pop();
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;
    
    q.push(11);
    cout << q.getFront() << ' ' << q.getRear() << ' ' << q.getSize() << endl;


}


 
