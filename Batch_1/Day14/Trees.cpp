#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:

    int data;
    Node *left, *right;

    Node() {
        this->data = 0;
        this->left = this->right = nullptr;
    }
    Node(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
    Node(int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node* buildTree( vector<int> &arr, int &itr ) {

    // BASE CASE
    if ( arr[itr] == -1 ) {
        itr++; // Shift itr to next number to be consumed.
        return nullptr;
    }


    // RECURSIVE CASE
    Node* root = new Node(arr[itr]);

    itr++; // Shift itr to next number to be consumed.

    root->left = buildTree(arr,itr);

    // change will be observed in itr. and will be reained.

    root->right = buildTree(arr,itr);

    return root;

}

void preOrder(Node *root) {

    if ( root==nullptr)
        return ;
    
    cout << root->data << ' '; // N
    
    preOrder(root->left); // L
    
    preOrder(root->right); // R

}


void postOrder(Node *root) {

    if ( root==nullptr)
        return ;
    
    
    postOrder(root->left); // L
    
    postOrder(root->right); // R

    cout << root->data << ' '; // N
}


void inOrder(Node *root) {

    if ( root==nullptr)
        return ;
    
    
    inOrder(root->left); // L
    
    cout << root->data << ' '; // N

    inOrder(root->right); // R

}


void levelOrder(Node *root) {

    queue<Node*> q;
    q.push(root);

    while ( !q.empty() ) {

        Node* front = q.front();
        q.pop();

        cout << front->data << ' ';
        
        if ( front->left != nullptr )
            q.push(front->left);
        
        if ( front->right != nullptr )
            q.push(front->right);

    }

}


bool searchInTreeDFS(Node *root, int ele ) {

    // BASE CASE
    if ( root==nullptr )
        return false;


    // RECURSIVE CASE

    if ( root->data == ele ) {
        // ELEMENT FOUND 
        return true;
    }

    bool res = searchInTreeDFS(root->left, ele);

    if ( res ) {
        return true;
    }

    return searchInTreeDFS(root->right, ele);

}



int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    
    for ( int &i:v )
        cin >> i;
    
    int itr = 0;
    Node *root = buildTree(v,itr);

    cout << "\n\nPreOrder Traversal\n\n";
    preOrder(root);
    cout << endl;

    cout << "\n\nPostOrder Traversal\n\n";
    postOrder(root);
    cout << endl;

    cout << "\n\nInOrder Traversal\n\n";
    inOrder(root);
    cout << endl;

    cout << "\n\nLevel Order Traversal\n\n";
    levelOrder(root);
    cout << endl;

    // cout << "\n\nElement you want to search:   ";
    // int x; cin >> x;
    // cout << "DFS: " << searchInTreeDFS(root,x) << endl << endl;



}

// INPUT
// 19
// 1 2 3 -1 4 -1 -1 5 -1 -1 6 -1 7 8 -1 -1 9 -1 -1


// PreOrder Traversal

// 1 2 3 4 5 6 7 8 9 


// PostOrder Traversal

// 4 3 5 2 8 9 7 6 1 


// InOrder Traversal

// 3 4 2 5 1 6 8 7 9 