#include <iostream>
using namespace std;
class patient{
public:
    int data;
    patient*next;
    patient(int data)
     {
        this->data=data;
        this->next=NULL;
    }
};
class HospitalQueue{
public:
    patient*head;
    HospitalQueue(){
        head=NULL;
    }
    // Insert at front
    void insertFront(int data) {
        patient* n = new patient(data);
        n->next = head;
        head = n;
    }
    // Insert at end
    void insertEnd(int data) {
        patient*n =new patient(data);
        if (head==NULL) {
            head=n;
            return;
        }
        patient*temp=head;

        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = n;
    }
    // Insert at specific position
    void insertPosition(int data,int pos){
        if (pos==1){
            insertFront(data);
            return;
        }
        patient* temp=head;
        for(int i=1;i<pos-1&&temp!=NULL;i++)
            temp=temp->next;
        if (temp==NULL) {
            cout<<"Invalid position"<<endl;
            return;
        }
        patient* n=new patient(data);
        n->next=temp->next;
        temp->next=n;
    }
    // Display queue
    void display(){
        patient* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    HospitalQueue q;

    q.insertFront(1);
    q.display();

    q.insertEnd(2);
    q.display();

    q.insertPosition(3, 2);
    q.display();

    return 0;
}
