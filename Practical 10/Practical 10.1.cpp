
#include <iostream>
using namespace std;

int main() {
    int slot[10];
    int n, reg;

    for (int i = 0; i < 10; i++)
        slot[i] = -1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> reg;

        int index = reg % 10;
        int count = 0;

        while (slot[index] != -1 && count < 10) {
            index = (index + 1) % 10;
            count++;
        }

        if (count == 10)
            cout << "Parking Full for " << reg << endl;
        else
            slot[index] = reg;
    }

    cout << "Parking Slots:" << endl;

    for (int i = 0; i < 10; i++)
        cout << i << ": " << slot[i] << endl;

    return 0;
}

