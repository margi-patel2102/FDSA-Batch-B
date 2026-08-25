#include <iostream>
using namespace std;
class patient{
public:
    int data;
    patient* next;
    patient(int data) {
        this->data=data;
        this->next=NULL;
    }
};
class HospitalQueue {
public:
    patient* head;
    HospitalQueue() {
        head = NULL;
    }
    // Insert at end
    void insertEnd(int data) {
        patient* n=new patient(data);
        if (head==NULL) {
            head=n;
            return;
        }
        patient* temp=head;

        while(temp->next!=NULL)
            temp=temp->next;
        temp->next = n;
    }
    // Delete by value
    void deleteValue(int value){
        if (head==NULL)
            return;
        if (head->data==value){
            head=head->next;
            return;
        }
        patient* temp=head;
        while(temp->next!=NULL&&temp->next->data!=value)
            temp=temp->next;
        if (temp->next!=NULL)
            temp->next=temp->next->next;
    }
    // Forward display
    void display(){
        patient* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    // Reverse printing
    void reversePrint(patient* temp) {
        if(temp==NULL)
            return;
        reversePrint(temp->next);
        cout<<temp->data<<" ";
    }
};
int main(){
    HospitalQueue q;
    q.insertEnd(1);
    q.insertEnd(2);
    q.insertEnd(3);
    q.insertEnd(4);
    cout<<"Forward: ";
    q.display();
    q.deleteValue(2);
    cout<<"After deletion: ";
    q.display();
    cout << "Reverse: ";
    q.reversePrint(q.head);
    return 0;
}
