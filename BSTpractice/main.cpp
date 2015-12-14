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
    /*if you dont want to create a binary tree
        you dont need these conditions ; just
        traverse to the point where you want to
        insert the node and add the data.*/
    if(root==NULL)
    {
        //empty tree
        root=getnewnode(data);
    }
    else if(data<= root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right =Insert(root->right, data);
    }
    return root;
}
bool searching(bstnode* root, int data )
{
    if(root ==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        return searching (root->left,data);
    else
        return searching(root->right, data);

}
int findmin(bstnode* root)
{
    if(root==NULL)
        return -1;
    while(root->left!=NULL)
        root=root->left;
    return root->data;
}
bstnode* findminroot(bstnode* root)
{
    if(root==NULL)
        return root;
    while(root->left!=NULL)
        root=root->left;
    return root;
}
int findmax(bstnode* root)
{
    if(root==NULL)
        return -1;
    while(root->right!=NULL)
        root=root->right;
    return root->data;
}
int findheight(bstnode* root)
{
    if(root==NULL)
        return -1;
    return(1+max(findheight(root->left),findheight(root->right)));

}
void levelorder(bstnode* root)
{
    if(root==NULL)
        return ;
    queue<bstnode* >Q;
    Q.push(root);
    while(!Q.empty())
    {
        bstnode* current=Q.front();
        cout<<current->data<<" ";
        if(current -> left!=NULL)
            Q.push(current->left);
        if(current -> right!=NULL)
            Q.push(current->right);
        Q.pop();
    }
}
void preorder(bstnode* root)
{
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(bstnode* root)
{
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(bstnode* root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
bstnode* DELETE(bstnode* root,int data)
{
    if(root==NULL)
        return root;
    else if(data<root->data)
        root->left=DELETE(root->left,data);
    else if(data>root->data)
        root->right=DELETE(root->right,data);
    else//found you bastard and i am going to delete you now;
    {
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->left==NULL)
        {
            bstnode* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            bstnode* temp=root;
            root=root->left;
            delete temp;
        }
        else
        {
            bstnode* temp=findminroot(root->right);
            root->data=temp->data;
            root->right=DELETE(root->right,temp->data);
        }
    }
    return root;
}
int countsize(bstnode* root)
{
    if(root==NULL)
        return 0;
    return(1+countsize(root->left)+countsize(root->right));
}
bool printAncestors(bstnode* root, int target)
{
  /* base cases */
  if (root == NULL)
     return false;

  if (root->data == target)
     return true;

  /* If target is present in either left or right subtree of this node,
     then print this node */
  if ( printAncestors(root->left, target) ||
       printAncestors(root->right, target) )
  {
    cout << root->data << " ";
    return true;
  }

  /* Else return false */
  return false;
}
int countleafnodes(bstnode* root)
{
    if(root== NULL)
        return 0;
    if(root->left == NULL && root-> right == NULL)
        return 1;
    return ( countleafnodes(root->left)+ countleafnodes(root->right));
}
bool checkchildrenproperty(bstnode* root)
{
    if(root==NULL||(root->left==NULL&&root->right==NULL))
        return true;
    int a=0,b=0;
    if(root->left!=NULL)
        a=root->left->data;
    if(root->right!=NULL)
        b=root->right->data;
    int c=root->data;
    if(c==a+b&&checkchildrenproperty(root->left)&&checkchildrenproperty(root->right))
        return true ;
    else
        return false;

}
void kthnode ( bstnode* root , int k )//prints kth node from the root
{
    if(root==NULL)
        return;
    if( k==0 )
    {
        cout<<root->data<<" ";
        return ;
    }
    kthnode(root->left,k-1);
    kthnode(root->right,k-1);
}
int main()
{
    bstnode* root;
    root=NULL;
    int n;
    cout<<"Enter the number of data in the tree\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        root=Insert(root,num);
    }
    int choice;
    cout<<"Enter your choice : \n 1 for searching an element \n 2 for finding the minimum element \n 3 for finding the maximum of the element \n 4 for finding the height of the tree  \n 5 for Level Order Traversal \n 6 for Preorder Traversal \n 7 Inorder Traversal \n 8 Postorder traversal \n 9 for DELETING a Node from the tree \n 10 for calculating the size of the TREE \n 11 for printing all the ancestors of a number \n 12 for counting no. of leaf nodes \n 13 for checking the children sum property \n 14 for printing all the nodes at distance k from the root \n 0 for exit \n";
    cin>>choice;
    int number,z,z1,z2,de;
    while(choice!=0)
    {
        switch(choice){
        case 1:
                cout<<"Enter the number you want to search "<<endl;
                cin>>number;
                if(searching(root,number)==true)
                    cout<<"FOUND"<<endl;
                else
                    cout<<"NOT FOUND\n";
                break;
        case 2: z = findmin(root);
                if(z==-1)
                    cout<<"The TREE is empty \n";
                else
                    cout<<"The minimum element is : "<<z<<endl;
                break;
        case 3: z1 = findmax(root);
                if(z==-1)
                    cout<<"The TREE is empty \n";
                else
                    cout<<"The maximum element is : "<<z1<<endl;
                break;
        case 4: z2=findheight(root);
                if(z2==-1)
                    cout<<"The TREE is empty \n";
                else
                    cout<<"The height of the tree is : "<<z2<<endl;
                break;
        case 5: levelorder(root);
                break;
        case 6: preorder(root);
                break;
        case 7: inorder(root);
                break;
        case 8: postorder(root);
                break;
        case 9: cout<<"Enter the data to be deleted"<<endl;
                cin>>de;
                DELETE(root,de);
                break;
        case 10:cout<<"Size of the tree is : "<<countsize(root)<<endl;
                break;
        case 11:cout<<"Enter the number you want to find ancestor of ";
                cin>>number;
                printAncestors(root,number);
                break;
        case 12:cout<<"no. of leaf nodes are : "<<countleafnodes(root)<<endl;
                break;
        case 13:if(checkchildrenproperty(root)==true)
                    cout<<"The Children Sum Property holds. "<<endl;
                else
                    cout<<"The Children Sum Property doesnt hold. "<<endl;
                break;
        case 14:int k;
                cout<<"Enter the value of k: ";
                cin>>k;;
                kthnode(root,k);
                cout<<endl;
                break;
        default: cout<<"Wrong Instruction"<<endl;
                 break;
        }
        cout<<"Enter next choice :";
        cin>>choice;
    }
}
