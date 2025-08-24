#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to build tree recursively
Node* buildTree() {
    int val;
    cout << "Enter value (-1 for NULL): ";
    cin >> val;

    if (val == -1) return NULL;

    

    Node* root = new Node(val);

    cout << "Enter left child of " << val << endl;
    root->left = buildTree();

    cout << "Enter right child of " << val << endl;
    root->right = buildTree();
    

    return root;
}

// Inorder traversal (for testing)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = buildTree();

    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
