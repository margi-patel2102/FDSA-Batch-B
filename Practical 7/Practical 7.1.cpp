#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter queue size: ";
    cin >> n;
    int queue[100];
    int front = 0;
    int rear = -1;
    int count = 0;
    int operations;
    cout << "Enter number of operations: ";
    cin >> operations;
    for (int i = 0; i < operations; i++) {
        int choice, value;
        cout << "\n1. Join";
        cout << "\n2. Serve";
        cout << "\nEnter choice: ";
        cin >> choice;
        // Join
        if (choice == 1) {
            if (count == n) {
                cout << "Error: Queue is full." << endl;
            }
            else {
                cout << "Enter token number: ";
                cin >> value;
                rear = (rear + 1) % n;
                queue[rear] = value;
                count++;
                cout << "Front token: " << queue[front] << endl;
            }
        }
        // Serve
        else if (choice == 2) {
            if (count == 0) {
                cout << "Error: Queue is empty." << endl;
            }
            else {
                cout << "Served token: " << queue[front] << endl;
                front = (front + 1) % n;
                count--;
                if (count > 0)
                    cout << "Front token: " << queue[front] << endl;
                else
                    cout << "Queue is empty." << endl;
            }
        }
        else {
            cout << "Wrong choice!" << endl;
        }
    }
    return 0;
}
