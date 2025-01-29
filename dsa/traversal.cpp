#include <iostream>

struct Node {
    int id;
    Node* left;
    Node* right;

    Node(int employeeID) {
        id = employeeID;
        left = ;
        right = nullptr;
    }
};

void insert(Node*& root, int employeeID) {
    if (root == nullptr) {
        root = new Node(employeeID);
    } else if (employeeID < root->id) {
        insert(root->left, employeeID);
    } else {
        insert(root->right, employeeID);
    }
}

void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    std::cout << root->id << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    int employeeID;

    while (true) {
        std::cin >> employeeID;
        if (employeeID == -1) {
            break;
        }
        insert(root, employeeID);
    }

    inOrderTraversal(root);
    std::cout << std::endl;

    return 0;
}
