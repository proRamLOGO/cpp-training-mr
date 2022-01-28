#include <iostream>
using namespace std;

// SYNTAX OF STRUCTURES
// struct NAME {
//     ...
// };

struct node {
    int data;
    node* next;
};

int main() {

    node *head, *tail;
    head = tail = nullptr;
 
    int n;
    cin >> n;

    for ( int i = 0 ; i < n ; i++ ) {

        int dataValue;
        cin >> dataValue;

        if ( i==0 ) {
            // LL is empty
            // head and tail are at null

            head = new node;
            (*head).next = nullptr;
            (*head).data = dataValue;
            tail = head;

        } else {

            // tail.next = (node*)malloc(sizeof(node)); //i+=a
            (*tail).next = new node;                        //i++
            tail = (*tail).next;
            (*tail).data = dataValue;
            tail->data = dataValue;
            (*tail).next = nullptr;
            tail->next = nullptr;
        }
        
    }    

    // LL has been created;

    for ( node *itr = head ; itr != nullptr ; itr = itr->next ) {
        cout << itr << "  :  " << itr->next << "  :  " << itr->data << '\n';
    }
    cout << endl;


}


// '\n' == endl;
// FOR DAY9 - OBJECTS, CLASSES, POLYMORPHISM, INHERITANCE, STACKS, QUEUES;
