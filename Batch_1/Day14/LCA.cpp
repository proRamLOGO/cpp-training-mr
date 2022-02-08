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


Node* lca(Node* root, int n1, int n2, bool &n1f, bool &n2f) {

    if ( root == nullptr )
        return nullptr;

    Node *resFromLeft  = lca(root->left,  n1, n2,  n1f, n2f);
    Node *resFromRight = lca(root->right, n1, n2,  n1f, n2f);

    if ( resFromLeft!=nullptr && resFromRight!=nullptr ) 
        return root;

    else if ( resFromLeft!=nullptr ) {
        if ( root->data == n1 ) {
            n1f = true;
            return root;
        }
        if ( root->data == n2 ) {
            n2f = true;
            return root;
        }
        return resFromLeft;
    }
    else if ( resFromRight!=nullptr ) {
        if ( root->data == n1 ) {
            n1f = true;
            return root;
        }
        if ( root->data == n2 ) {
            n2f = true;
            return root;
        }
        return resFromRight;
    }
    else if ( root->data == n1 ) {
        n1f = true;
        return root;
    }
    else if ( root->data == n2 ) {
        n2f = true;
        return root;
    }

    return nullptr;

}


int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    
    for ( int &i:v )
        cin >> i;
    
    int itr = 0;
    Node *root = buildTree(v,itr);

    cout << "\n\n-------------------------------------------------------------\n\n";
 
    int n1, n2;
    cin >> n1 >> n2;


    bool n1f=0, n2f=0;
    Node *LCA = lca(root,n1,n2,n1f,n2f);

    if ( n1f && n2f )
        cout << "LCA is:    " << LCA->data << endl << endl;
    else 
        cout << "Either or both nodes DOES NOT exist in the tree\n\n";

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