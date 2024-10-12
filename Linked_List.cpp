// Define a simple singly linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    // Traverse and manipulate the linked list
    // ...
    return 0;
}
