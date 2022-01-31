#include <iostream>
using namespace std;

template<typename t>
class Node {
public:
    t data;
    Node<t> *next;
    Node(t data) {
        this->data = data;
        this->next = nullptr;
    }
    Node(t data, Node<t> *next) {
        this->data = data;
        this->next = next;
    }
};


template<typename t>
class Queue {

private:
    Node<t> *front, *rear;
    int size;

public:

    Queue() {
        this->front = this->rear = nullptr;
        this->size = 0;
    }

    t getFront(){
        if ( size==0 ) {
            // cout << "UNDERFLOW\n";
            return '#';
        }
        return this->front->data;
    }

    t getRear(){
        if ( size==0 ) {
            // cout << "UNDERFLOW\n";
            return '#';
        }
        return this->rear->data;
    }

    int getSize() {
        return this->size;
    }

    bool pop() {
        if ( size==0 ) {
            // If we popped from sz 0 linked list.
            // cout << "UNDERFLOW\n";
            return false; // NOT SUCCESSFULL
        }

        this->front = this->front->next;
        
        // If we popped from sz 1 linked list.
        if ( this->front == nullptr )
            this->rear = nullptr;
        
        this->size--;
        return true;  // SUCCESSFULL
    }

    bool push(t data) {

        if ( this->size == 0 ) {
            // IF QUEUE IS EMPTY , i.e. F and R are at nullptr
            this->front = new Node<t>(data);
            this->rear = this->front;
        } else {
            this->rear->next = new Node<t>(data);
            this->rear = this->rear->next;
        }
        this->size++;
        return true;

    }

};

int main() {

    string s;
    cin >> s;

    int freq[26] = {0};

    Queue<char> queue;

    for ( char ch:s ) {

        freq[ch-'a']++;
        
        if ( freq[ch-'a'] == 1 ) {
            queue.push(ch);
        }

        while ( queue.getSize() > 0 && freq[ queue.getFront() - 'a' ] > 1  )
            queue.pop();
        
        if ( queue.getFront() == -1 )
            cout << '#';
        else {
            cout << queue.getFront();
        }

    }

    cout << endl;

}

// abacbddce
