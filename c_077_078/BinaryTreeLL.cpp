#include <iostream>
using namespace std;

// Defining the NODE structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a binary tree
struct Node* create() {
    int data;
    cout << "Enter data (-1 for NULL): ";
    cin >> data;

    if (data == -1) return NULL;

    struct Node* newNode = new Node;
    newNode->data = data;

    cout << "Left child of " << data << endl;
    newNode->left = create();

    cout << "Right child of " << data << endl;
    newNode->right = create();

    return newNode;
}


void inorderDisplay(struct Node* root) {
    if (root == NULL) return; // Base case

    inorderDisplay(root->left);   // Visit left subtree
    cout << root->data << " ";    // Visit root node
    inorderDisplay(root->right);  // Visit right subtree
}
void preDisplay(struct Node* root) {
    if (root == NULL) return; // Base case

    cout << root->data << " ";    // Visit root node
    preDisplay(root->left);   // Visit left subtree
    preDisplay(root->right);  // Visit right subtree
}
void postDisplay(struct Node* root) {
    if (root == NULL) return; // Base case

    postDisplay(root->left);   // Visit left subtree
    postDisplay(root->right);  // Visit right subtree
    cout << root->data << " ";    // Visit root node
}

int main() {
    struct Node* root = NULL; // Initialization
    root = create(); // Creating the tree

    cout << "\nInorder Traversal of Tree: ";
    inorderDisplay(root);

    cout << "\nPreorder Traversal of Tree: ";
    preDisplay(root);

    cout << "\nPostrder Traversal of Tree: ";
    postDisplay(root);

    
    return 0;
}
