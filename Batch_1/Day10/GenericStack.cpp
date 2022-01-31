#include <iostream>

using namespace std;

template<typename t>
class Stack {

private:
    int top, maxCapacity;
    t *arr;
    
public:
    Stack(int maxCapacity) {
        // node = new Node;
        this->arr = new t[maxCapacity];
        this->size = 0;
        this->top = -1;
        this->maxCapacity = maxCapacity;
    }

    t getTop() {
        if ( this->size == 0)
            // UNDERFLOW
            return '#';
        
        return this->arr[this->top];
    }
    int getSize() {
        return this->top+1;
    }

    bool push(t data) {
        
        // CHECK OFOR OVERFLOW
        if ( this->top+1 == maxCapacity ) {
            // OVERFLOW
            return false;
        }

        this->top++;
        this->arr[this->top] = data;
        return true;
    }

    bool pop() {

        // CHECK FOR UNDERFLOW
        if ( this->getSize() == 0 ) {
            // UNDERFLOW
            return false;
        }

        this->top--;
        return true;

    }

};

