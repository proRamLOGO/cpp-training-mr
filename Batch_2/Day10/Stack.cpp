#include<iostream>

using namespace std;

class Stack {
public:

    int top, *arr, maxCapacity;

    Stack(int maxCapacity) {
        this->arr = new int[maxCapacity];
        this->top = -1;
        this->maxCapacity = maxCapacity;
    }

    bool pop() {

        if ( this->top == -1 ) 
            // UNDERFLOW
            return false;
        
        this->top--;
        return true;

    }

    bool push(int data) {
        if ( this->top+1 == this->maxCapacity ) {
            // OVERFLOW
            return false;
        }

        this->top++;
        this->arr[this->top] = data;
        return true;
    }   

    int getSize(){
        return this->top+1;
    }
    int getTop(){

        if ( this->top==-1 )
            // UNDERFLOW, NO ELEMENT TO SHOW
            return -1;

        return this->arr[this->top];
    }

};

int main() {

    Stack stk(7);

    stk.push(5);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(10);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(11);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.pop();
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.pop();
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(12);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(13);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(100);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(15);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(17);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(18);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.push(19);
    cout << stk.getTop() << ' ' << stk.getSize() << endl ; // 18 7

    stk.pop();
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;

    stk.pop();
    cout << stk.getTop() << ' ' << stk.getSize() << endl ;


}


 
