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

    node *head, *tail;
    head = tail = nullptr;

    int n;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ ) {

        int dataValue;
        cin >> dataValue;    

        if ( i==0 ) {
            // linked list is empty
            head = new node;
            (*head).next = nullptr;   // DO NOT DO head.next = nullptr;
            (*head).data = dataValue; // DO NOT DO head.data = dataValue;
            tail = head;

        } else {
            // when linked list is not empty

            // (*tail).next = (node*)malloc(1*sizeof(node));
            tail->next = new node;
            tail = tail->next;

            // now tail standing at newly created node.
            tail->data = dataValue;
            tail->next = nullptr;
        }

    }

    // ll is created, with head preserved.

    node *itr = head;
    while ( itr != nullptr ) {
        cout << itr->data << ' ';
        itr = itr->next;
    }
    // itr is  nullptr
    while ( itr != nullptr ) {
        cout << itr->data << ' ';
        itr = itr->next;
    }

    cout << endl << endl;

    for ( node *itr = head ; itr != nullptr ; itr = itr->next ) {
        cout << itr->data << ' ';
    }

    cout << endl << endl;

}