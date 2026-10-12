#include<iostream>
#include<queue>
using namespace std;
struct Node{
int data;
Node *left;
Node *right;
};
void inorder(Node *root){
if(root==NULL)
    return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
void preorder(Node *root){
if(root==NULL)
    return;
    cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
void postorder(Node *root){
if(root==NULL)
    return;
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}
void levelorder(Node *root){
if(root==NULL)
    return;
queue<Node*>q;
q.push(root);
while(!q.empty()){
    Node *temp=q.front();
    q.pop();
    cout<<temp->data<<" ";
    if(temp->left!=NULL)
        q.push(temp->left);
    if(temp->right!=NULL)
        q.push(temp->right);
}
}
int main(){
Node *root=new Node{1,NULL,NULL};
root->left=new Node{2,NULL,NULL};
root->right=new Node{3,NULL,NULL};
root->left->left=new Node{4,NULL,NULL};
root->left->right=new Node{5,NULL,NULL};
root->right->left=new Node{6,NULL,NULL};
root->right->right=new Node{7,NULL,NULL};
cout<<"\nInorder: ";
inorder(root);
cout<<"\nPreorder: ";
preorder(root);
cout<<"\nLevel Order: ";
levelorder(root);
return 0;
}
