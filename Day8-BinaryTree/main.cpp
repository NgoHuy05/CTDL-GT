#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node *makeNode(int x) {
    node *newNode = new node();
    newNode->data = x;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void inorder(node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

void preorder(node *root) {
    if (root != NULL) {
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data;
    }
}

node *insert(node *root, int value) {
    if (root == NULL) {
        return makeNode(value);
    }
    if (value > root->data) {
        root->right = insert(root->right, value);
    } else if (value < root->data) {
        root->left = insert(root->left, value);
    }
    return root;
}

node* minNode(node* root) {
    node* current = root;
    while (current && current->left != nullptr)
        current = current->left;
    return current;
}

node* deleteNode(node* root, int key) {
    if (root == nullptr) return root;
    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = minNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int search(node *root, int key) {
    if (root == NULL) return 0;
    if (root->data == key) return 1;
    else if (root->data < key) {
        return search(root->left, key);
    }
    else if (root->data > key) {
        return search(root->right, key);
    }
}

int Height(node *root) {
    if (root == NULL) return 0;
    int left = Height(root->left);
    int right = Height(root->right);
    return max(left,right) + 1;
}

int countLeaves(node* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1; 
    return countLeaves(root->left) + countLeaves(root->right);
}

int countNodes(node* root) {
    if (root == nullptr) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {

}