#include <iostream>

using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* getnewnode(int data)
{
    node* newnode = new node;
    newnode->data = data ;
    newnode->left = newnode->right=NULL;
    return newnode;
}
void printpath(node* root,int path[] ,int p )
{
    if(root==NULL)
        return ;
    path[p]=root->data;p++;
    if(root->left==NULL&&root->right==NULL)
    {
        for(int i=0;i<p;i++)
            cout<<path[i]<<" ";
        cout<<endl;
    }
    else
    {
        printpath(root->left,path,p);
        printpath(root->right,path,p);
    }
}
int main()
{
    node* root = getnewnode(5) ;
    root->left = getnewnode(10);
    root->right = getnewnode(15);
    root->left->left=getnewnode(20);
    root->left->right=getnewnode(25);
    root->right->right=getnewnode(30);
    int path[1000],p=0;
    printpath(root,path,p);

    return 0;
}
