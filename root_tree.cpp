#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node * left;
        Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


int main(){
    Node* root= Node(10);
    Node* a= Node(20);
    Node* b= Node(30);
    Node* c= Node(40);
    Node* d= Node(50);
    Node* e= Node(60);
    Node* f= Node(70);
    Node* g= Node(80);
    Node* h= Node(90);
    Node* i= Node(100);
    
    // conection
    root->left=a;
    root->right=b;

    a->left=c;
    a->right=h;

    b->right=e;
    c->right=d;

    d->left=f;
    d->right=g;

    h->right=i;
    
    return 0;
}