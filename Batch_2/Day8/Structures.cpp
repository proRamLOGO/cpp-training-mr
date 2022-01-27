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

    node n, m;

    // ACCESS OPERATOR '.', enables to access members of structure.

    cin >> n.data;
    n.next = &m;

    // cout << n << endl; // PRIN INSTRUCTION NOT THERE.
    cout << &n << endl;
    cout << n.data << endl;
    cout << n.next << endl;
    cout << &(n.data) << endl;
    cout << &(n.next) << endl;
    // cout << m << endl;
    cout << &m << endl;


}