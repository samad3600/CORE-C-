#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* left;
    Node* right;
};

void insert(Node<int>*& root, int value) {
    if (!root) {
        root = new Node<int>;
        root->data = value;
        root->left = root->right = nullptr;
    } else {
        queue<Node<int>*> q;
        q.push(root);
        while (!q.empty()) {
            Node<int>* curr = q.front();
            q.pop();
            if (curr->left)
                q.push(curr->left);
            else {
                curr->left = new Node<int>;
                curr->left->data = value;
                curr->left->left = curr->left->right = nullptr;
                break;
            }
            if (curr->right)
                q.push(curr->right);
            else {
                curr->right = new Node<int>;
                curr->right->data = value;
                curr->right->left = curr->right->right = nullptr;
                break;
            }
        }
    }
}

int main() {
    Node<int>* root = nullptr;
    insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);

    // Perform other operations (e.g., deletion, traversal) as needed

    return 0;
}
