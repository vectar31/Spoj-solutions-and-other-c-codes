#include <iostream>

using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
};
node* first;node* last;

void create(int x)
{
    node* temp = new node;
    if(first==NULL&&last==NULL)
    {
        //cout<<"entered 1 "<<endl;
        temp->data=x;
        temp->next=NULL;
        temp->prev=NULL;
        first=temp;
        last=temp;
    }
    else
    {
         //cout<<"entered"<<endl;
        temp->data=x;
        temp->prev=last;
        temp->next=NULL;
        last=temp;
        temp->prev->next=last;
        //cout<<"entered"<<endl;
    }
}
node* searchnode(int x)
{
    node* temp  ;
    temp=first ;
    if(temp==NULL)
        return temp;
    while(temp!=NULL)
    {
        if(temp->data == x)
            return temp;
        temp=temp->next;
    }
    temp=NULL;
    return temp;
}
void print()
{
    node* temp;
    temp=first;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void deleting(int x)
{
    if(searchnode(x)!=NULL)
    {
        node* temp=searchnode(x);
        if(temp==first)
        {
            temp->next->prev=NULL;
            first=temp->next;
            //delete temp;
        }
        else if(temp==last)
        {
            temp->prev->next=NULL;
            last=temp->prev;
        }
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
        }
    }
    else
    {
        cout<<"cannot delete element not found or the list is empty"<<endl;
    }
}
void printreverse(node* head)
{
    if(head==NULL)
        return;
    printreverse(head->next);
    cout<<head->data;
}
int main()
{
    first = last = NULL ;
    int n ;
    cin>>n;
    while(n!=0)
        {create(n);cin>>n;}
    //cout<<searchnode(5)<<endl;

    /*print();
    deleting(1);
    print();
    deleting(9);
    print();
    deleting(7);
    print();*/
    printreverse(first);
    return 0;
}
