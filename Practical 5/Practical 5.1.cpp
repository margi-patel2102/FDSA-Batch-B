#include<iostream>
using namespace std;
struct node{
string song;
node *prev;
node *next;
};
void addatstart(node *&head,string song)
{
    node *newnode=new node;
    newnode->song=song;
    newnode->prev=NULL;
    newnode->next=head;
    if(head!=NULL)
        head->prev=newnode;
    head=newnode;
}
void addlast(node *&head,string song)
{
    node *newnode=new node;
    newnode->song=song;
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next !=NULL)
        temp=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
void insertafter(node *&head,string givensong,string newsong)
{
    node *temp=head;
    while(temp!=NULL && temp->song!=givensong)
        temp=temp->next;
    if(temp==NULL)
    {
        cout<<"Song Not Found!!\n";
        return;
    }
    node *newnode=new node;
    newnode->song=newsong;
    newnode->next=temp->next;
    newnode->prev=temp;
    if(temp->next->prev=newnode);
    temp->next=newnode;
}
void removeatstart(node *&head)
{
    if(head==NULL)
        return;
    node *temp=head;
    head=head->next;
    if(head!=NULL)
        head->prev=NULL;
    delete temp;
}
    void display(node *head)
    {
        while(head!=NULL)
        {
            cout<<head->song<<" ";
            head=head->next;
        }
        cout<<endl;
    }
    int main()
    {

        node *head=NULL;
        addatstart(head,"A");
        display(head);
        addlast(head,"B");
        display(head);
        addlast(head,"C");
        display(head);
        insertafter(head,"B","X");
        display(head);
        removeatstart(head);
        display(head);
        return 0;
    }



