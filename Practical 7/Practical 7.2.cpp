#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> patients;

    int front = 0;

    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int choice;

        cout << "\n1. Arrive";
        cout << "\n2. Attend";
        cout << "\nEnter choice: ";
        cin >> choice;

        // New patient arrives
        if (choice == 1) {
            string name;

            cout << "Enter patient name: ";
            cin >> name;

            patients.push_back(name);

            cout << "Front patient: " << patients[front] << endl;
        }

        // Doctor attends patient
        else if (choice == 2) {

            if (front >= patients.size()) {
                cout << "No patients waiting." << endl;
            }
            else {
                cout << "Attended patient: " << patients[front] << endl;

                front++;

                if (front < patients.size())
                    cout << "Front patient: " << patients[front] << endl;
                else
                    cout << "No patients waiting." << endl;
            }
        }

        else {
            cout << "Wrong choice!" << endl;
        }
    }

    return 0;
}
