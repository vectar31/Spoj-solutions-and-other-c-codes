#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
struct bstnode
{
    int data;
    bstnode* left;
    bstnode* right;
};
bstnode* getnewnode(int data)
{
    bstnode* newnode = new bstnode;
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
bstnode* Insert(bstnode* root,int data)
{
    if(root==NULL)//empty tree
        root=getnewnode(data);
    else if(data<= root->data)
        root->left=Insert(root->left,data);
    else
        root->right =Insert(root->right, data);
    return root;
}
int main()
{
    bstnode* root;
    int n;
    root = NULL;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        Insert(root,n);
    }
    if(root==NULL)
        cout<<"Abhi toh root null hai"<<endl;
    else
        cout<<"gggggggg"<<root->data;

    return 0;
}
