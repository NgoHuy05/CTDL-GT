#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node* next;
};

node *makeNode(int x){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushFirst(node **head,int x){
    node *newNode = makeNode(x);
    newNode->next = (*head);
    (*head) = newNode;
}

void pushLast(node **head,int x){
    node* newNode = makeNode(x);
    node *tmp =(*head);
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int size(node*head){
    int cnt = 0;
    while(head!= NULL){
        cnt++;
        head = head->next;
}
return cnt;
}
void insert(node **head,int k,int x){
    int n = size(*head);
    if(k < 1 || k > n+1) return;
    if(k == 1){
        pushFirst(head,x);
    }
    else if(k==n+1){
        pushLast(head,x);
    }
    else{
        node *tmp =(*head);
        for(int i = 1; i < k - 1; i++){
            tmp = tmp->next;
        }
        node*newNode = makeNode(x);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
void removeFirst(node **head) {
    if (*head == NULL) {
        return;
    } 
    node *tmp = *head;
    *head = (*head)->next;
    delete tmp;
}

void removeLast(node **head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->next == NULL) {
        delete *head;
        *head = NULL;
        return;
    }
    node *tmp = *head;
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    node *delNode = tmp->next;
    tmp->next = NULL;
    delete delNode;
}

void removeMid(node **head, int pos) {
    int n = size(*head);
    if (pos < 1 || pos > n) {
        return;
    } else if (pos == 1) {
        removeFirst(head);
    } else if (pos == n) {
        removeLast(head);
    } else {
        node *tmp = *head;
        for (int i = 1; i <= pos - 2; i++) {
            tmp = tmp->next;
        }
        node *delNode = tmp->next;
        tmp->next = tmp->next->next;
        delete delNode;
    }
}

bool find(node *head, int x) {
    while(head != NULL) {
        if (head->data == x) return true;
        head = head->next;
    }
    return false;
}
int main()
{
    node* head = NULL;
    while(1){
        cout << "------------------------------------" << endl;
        cout << "0. Thoat" << endl;
        cout << "1. Them vao dau" << endl;
        cout << "2. Them vao cuoi " << endl;
        cout << "3. Display " << endl;
        cout << "4. Chen vao: " << endl;
        cout << "5. Xoa dau " << endl;
        cout << "6. Xoa cuoi " << endl;
        cout << "7. xoa giua " << endl;
        cout << "8. tim kiem 1 phan tu " << endl;
        cout << "9. Lat nguoc " << endl;

        cout << "------------------------------------" << endl;
        cout << "Nhap lua chon: ";
        int lc; cin >> lc;
        if(lc == 1){
            cout << "nhap gia tri can them: ";
            int x;cin >> x;
            pushFirst(&head,x);
        }
        else if(lc == 2){
            cout << "Nhap gia tri can them: ";
            int x;cin >>x;
            pushLast(&head,x);
        }
        else if(lc == 3){
            display(head);
        }
        else if(lc == 4){
            cout << "Nhap vi tri chen: ";
            int k;cin >> k;
            cout << "Nhap gia tri can chen: ";
            int x;cin >> x;
            insert(&head,k,x);
        }
        else if(lc == 5){
            removeFirst(&head);
        }
        else if(lc == 6){
            removeLast(&head);
        }
        else if(lc == 7){
            int pos; cin >> pos;
            removeMid(&head,pos);
        }
        else if(lc == 0){
            break;
        }
    }
    return 0;
}
