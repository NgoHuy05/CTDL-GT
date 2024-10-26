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

int demLa(node *root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    int cnt = 0;
    cnt += demLa(root->right);
    cnt += demLa(root->left);
    return cnt;
}
int main() {

}