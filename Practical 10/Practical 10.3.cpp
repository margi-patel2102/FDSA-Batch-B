
#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, id;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> id;

        int h1 = id % 10;
        int h2 = 7 - (id % 7);
        int j = 0;

        while (j < 10 && table[(h1 + j * h2) % 10] != -1)
            j++;

        if (j == 10)
            cout << "Table Full for " << id << endl;
        else
            table[(h1 + j * h2) % 10] = id;
    }

    cout << "Hash Table:" << endl;

    for (int i = 0; i < 10; i++)
        cout << i << ": " << table[i] << endl;

    return 0;
}
