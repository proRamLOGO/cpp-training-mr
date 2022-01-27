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

    int n, k;
    cin >> n >> k ;

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

    for ( node *itr = head ; itr != nullptr ; itr = itr->next ) {
        cout << itr->data << ' ';
    }

    cout  << endl << endl ;

    node *ptr1, *ptr2;
    ptr1 = ptr2 = head;

    for ( int i = 0 ; i < k ; i++)
        ptr1 = ptr1->next;
    
    while ( ptr1 != nullptr) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    // i know ptr2 points to kth node FROM LAST.

    cout << "Kth node form last :     " << ptr2->data << endl;

    cout << endl << endl;

}