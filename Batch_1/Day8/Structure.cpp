#include<iostream>
using namespace std;

// SYNTAX for C++ Structure
// struct YOUR_DTP_NAME {
//     DECLARATION OF DIFFERENT ENTITTIES YOU WANNA HOLD
// };

struct node {
    int data;
    node *next;
};

int main() {

    node firstNode, secondNode;

    firstNode.data = 15;
    firstNode.next = &secondNode;    

    cout << firstNode.data << endl;
    cout << firstNode.next << endl;
    cout << &firstNode << endl;
    cout << &(firstNode.data) << endl;
    cout << &(firstNode.next) << endl;

}