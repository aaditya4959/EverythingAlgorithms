#include <iostream>
using namespace std;

int main() {
    int row;

    cout << "Enter number of rows: ";
    cin >> row;

    int totalRows = 2 * row - 1;

    for (int i = 0; i < totalRows; i++) {

        int stars;
        int spaces;

        // Upper Half
        if (i < row) {
            stars = i + 1;
            spaces = 2 * (row - stars);
        }

        // Lower Half
        else {
            stars = totalRows - i;
            spaces = 2 * (row - stars);
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