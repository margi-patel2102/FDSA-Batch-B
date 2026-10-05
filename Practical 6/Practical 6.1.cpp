#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter stack size: ";
    cin >> n;
    int stack[100];
    int top = -1;   // -1 means stack is empty
    int operations;
    cout << "Enter number of operations: ";
    cin >> operations;
    for (int i = 0; i < operations; i++)
    {
        int choice, value;
        cout << "\n1.Push\n";
        cout << "2.Pop\n";
        cout << "Enter operation: ";
        cin >> choice;
        if (choice == 1)
        {
            // Check if stack is full
            if (top == n - 1)
            {
                cout << "Error: Stack is full. Cannot place tray.\n";
            }
            else
            {
                cout << "Enter Position number: ";
                cin >> value;
                top++;
                stack[top] = value;
                cout << "Tray placed successfully.\n";
                cout << "Current top tray: " << stack[top] << endl;
            }
        }
        else if (choice == 2)
        {
            // Check if stack is empty
            if (top == -1)
            {
                cout << "Error: Stack is empty. Cannot take tray.\n";
            }
            else
            {
                cout << "Tray taken: " << stack[top] << endl;
                top--;
                if (top == -1)
                    cout << "Stack is now empty.\n";
                else
                    cout << "Current top tray: " << stack[top] << endl;
            }
        }
        else
        {
            cout << "Invalid operation.\n";
        }
    }
    return 0;
}
