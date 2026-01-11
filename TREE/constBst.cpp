#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int ele) {
    if (root == nullptr) {
        return new Node(ele);
    }

    if (ele < root->val) {
        root->left = insert(root->left, ele);
    } else {
        root->right = insert(root->right, ele);
    }

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    vector<int> arr = {6, 3, 11, 1, 5, 9, 13};

    Node* root = nullptr;

    for (int x : arr) {
        root = insert(root, x);
    }

    cout << "Inorder Traversal (Sorted Order): ";
    inorder(root);

    return 0;
}
