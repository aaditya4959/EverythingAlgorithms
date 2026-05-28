#include <iostream>
using namespace std;

int main() {
    int row;

    cout << "Enter number of rows: ";
    cin >> row;

    for (int i = 0; i < row; i++) {

        // Spaces
        for (int j = 0; j < row - i - 1; j++) {
            cout << " ";
        }

        // Increasing Characters
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }

        // Decreasing Characters
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}