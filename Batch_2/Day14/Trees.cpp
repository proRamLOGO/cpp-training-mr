#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node( int data ) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

Node* buildTree(vector<int> &arr, int &itr) {

    // BASE CASE
    if ( arr[itr] == -1 ) {
        itr++;
        return nullptr;
    }

    // RECURSIVE CASE

    Node *root = new Node(arr[itr]);
    itr++;

    root->left  = buildTree(arr,itr);
    root->right = buildTree(arr,itr);

    return root;

}

void preOrder(Node *root) {

    if ( root==nullptr )
        return;
    
    cout << root->data << ' ';  // N
    preOrder(root->left);       // L
    preOrder(root->right);      // R

}

void inOrder(Node *root) {

    if ( root==nullptr )
        return;
    
    inOrder(root->left);       // L
    cout << root->data << ' ';  // N
    inOrder(root->right);      // R

}

void postOrder(Node *root) {

    if ( root==nullptr )
        return;
    
    postOrder(root->left);       // L
    postOrder(root->right);      // R
    cout << root->data << ' ';  // N

}

void levelOrder(Node *root) {

    queue<Node*> q;
    q.push(root);

    while( !q.empty() ) {

        Node* front = q.front();
        q.pop();

        cout << front->data << ' ';

        if ( front->left != nullptr )
            q.push(front->left);
        if ( front->right != nullptr )
            q.push(front->right);

    }
        
}

bool searchInTree(Node *root, int target) {

    if ( root==nullptr )
        return false;
    
    if ( root->data == target )
        return true;
    
    if ( searchInTree(root->left,target) ) {
        return true;
    }
    return searchInTree(root->right,target);

}

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    for ( int &i:v )
        cin >> i;

    int itr = 0;
    Node *root = buildTree(v,itr);

    // tree is built

    cout << "\n\nPre Order Traversal\n\n";
    preOrder(root);
    
    cout << "\n\nPost Order Traversal\n\n";
    postOrder(root);
    
    cout << "\n\nIn Order Traversal\n\n";
    inOrder(root);

    cout << "\n\nLevel Order Traversal\n\n";
    levelOrder(root);
    
    cout << "\n\n-------------------------------------------------------------\n\n";

    cout << "Element to be searched:     ";
    int x; cin >> x;
    cout << "Element Search Status: " << searchInTree(root,x) ;

cout << endl << endl ;
}