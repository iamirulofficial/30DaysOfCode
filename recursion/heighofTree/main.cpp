#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    Node(int x){
        int data = x;
        left = right = NULL;
    }
};

int height(struct Node* root){

    if(root == NULL)
        return 0;

    return 1 + max(height(root->left),height(root->right));
}

int main(){
    struct Node* node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->left->right->right = new Node(6);

    cout<<height(node);
}