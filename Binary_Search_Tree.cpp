#include <iostream>
using namespace std;

// Define the structure for a BST node
struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int item) : key(item), left(nullptr), right(nullptr) {}
};

// Function to search for a key in the BST
Node* search(Node* root, int key) {
    if (root == nullptr || root->key == key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}

// Function to insert a new key into the BST
Node* insert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

// In-order traversal (prints keys in sorted order)
void inOrderTraversal(Node* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->key << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Insert some keys into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    // Search for a key
    int searchKey = 40;
    Node* result = search(root, searchKey);
    if (result)
        cout << "Key " << searchKey << " found in the BST." << endl;
    else
        cout << "Key " << searchKey << " not found in the BST." << endl;

    // Print the keys in sorted order
    cout << "In-order traversal of the BST: ";
    inOrderTraversal(root);
    cout << endl;

    // Clean up memory (optional)
    // TODO: Implement deletion if needed

    return 0;
}
