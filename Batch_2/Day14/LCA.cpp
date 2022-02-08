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

Node* lca(Node *root, int n1, int n2) {

    if ( root==nullptr )
        return nullptr;
    
    if ( root->data == n1 )
        return root;
    if ( root->data == n2 )
        return root;

    Node *leftRes  = lca(root->left ,n1,n2);
    Node *rightRes = lca(root->right,n1,n2);

    if ( leftRes!=nullptr && rightRes!=nullptr ) 
        return root;
    else if ( leftRes!=nullptr )
        return leftRes;
    else if ( rightRes!=nullptr )
        return rightRes;

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

    int n1,n2;
    cin >> n1 >> n2;
    Node *LCA=lca(root,n1,n2);
    cout << "LCA is:   " << LCA->data;

cout << endl << endl ;
}