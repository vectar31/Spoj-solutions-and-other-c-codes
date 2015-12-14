#include <bits/stdc++.h>
#define N 1000001
#define in(n) scanf("%d",&n)
#define out(n) printf("%d\n",n)
#define FOR(n) for(int i=0;i<n;i++)
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
int main()
{
    node* temp=new node();
    temp->data=5;
    temp->left=NULL;
    temp->right=NULL;
    return 0;
}
