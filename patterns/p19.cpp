#include <iostream>
using namespace std;

int main() {
    int row;

    cout << "Enter the number of rows: ";
    cin >> row;

    int totalRows = 2 * row;

    for (int i = 0; i < totalRows; i++) {

        int stars, spaces;

        // Upper Half
        if (i < row) {
            stars = row - i;
            spaces = 2 * i;
        }
        // Lower Half
        else {
            stars = i - row + 1;
            spaces = 2 * (totalRows - i - 1);
        }

        // Left Stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // Right Stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}