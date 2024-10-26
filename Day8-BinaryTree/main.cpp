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

int main() {

}