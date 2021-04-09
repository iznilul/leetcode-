//
// Created by Administrator on 2021/2/18.
//
#include <iostream>

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};

class Solution {
public:
    void inOrder(Node* root,Node* &head,Node* &tail){
        if(root==nullptr)
            return;
        inOrder(root->left, head, tail);
        if(head== nullptr)
            head=root;
        else{
            root->left=tail;
            tail->right=root;
        }
        tail=root;
        inOrder(root->right, head, tail);
    }
    Node* treeToDoublyList(Node* root) {
        if(root==nullptr) return root;
        Node* head=nullptr,*tail=nullptr;
        inOrder(root, head, tail);
        head->left=tail;
        tail->right=head;
        return head;
    }
};