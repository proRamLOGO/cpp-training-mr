#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
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

    int getFront(){
        if ( size==0 ) {
            cout << "UNDERFLOW\n";
            return -1;
        }
        return this->front->data;
    }

    int getRear(){
        if ( size==0 ) {
            cout << "UNDERFLOW\n";
            return -1;
        }
        return this->rear->data;
    }

    int getSize() {
        return this->size;
    }

    bool pop() {
        if ( size==0 ) {
            // If we popped from sz 0 linked list.
            cout << "UNDERFLOW\n";
            return false; // NOT SUCCESSFULL
        }

        this->front = this->front->next;
        
        // If we popped from sz 1 linked list.
        if ( this->front == nullptr )
            this->rear = nullptr;
        
        this->size--;
        return true;  // SUCCESSFULL
    }

    bool push(int data) {

        if ( this->size == 0 ) {
            // IF QUEUE IS EMPTY , i.e. F and R are at nullptr
            this->front = new Node(data);
            this->rear = this->front;
        } else {
            this->rear->next = new Node(data);
            this->rear = this->rear->next;
        }
        this->size++;
        return true;

    }

};

int main() {

    

}


