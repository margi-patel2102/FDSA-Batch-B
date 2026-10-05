#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> pages;
    int current = -1;

    int n;
    cout << "Enter number of operations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int choice;

        cout << "\n1. Visit Page";
        cout << "\n2. Back";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            string page;

            cout << "Enter page name: ";
            cin >> page;

            pages.push_back(page);
            current++;

            cout << "Current Page: " << pages[current] << endl;
        }

        else if (choice == 2) {
            if (current == 0) {
                cout << "Cannot go back. This is the first page." << endl;
            }
            else {
                current--;
                cout << "Current Page: " << pages[current] << endl;
            }
        }

        else {
            cout << "Wrong choice!" << endl;
        }
    }

    return 0;
}
