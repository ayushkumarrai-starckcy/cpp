#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

int sizeofTree(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeofTree(root->left) + sizeofTree(root->right);
}

bool isCBT(Node* root){
    if(root == NULL) return true;
    int size = sizeofTree(root);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(count < size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp){
            q.push(temp->left);
            q.push(temp->right);
        }
    }

    if(q.size()>0){
        Node* temp = q.front();
        if(temp != NULL) return false;
        q.pop();
    }

    return true;
}

bool isMaxHeap(Node* root){
    if(root == NULL) return true;
    if(root->left && root->val < root->left->val) return false;
    if(root->right && root->val < root->right->val) return false;
    return isMaxHeap(root->left) && isMaxHeap(root->right);
}

int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(isCBT(a) && isMaxHeap(a)){
        cout<<"The given binary tree is a complete binary tree and a max heap."<<endl;
    }else{
        cout<<"The given binary tree is not a complete binary tree or not a max heap."<<endl;
    }

    return 0;
}