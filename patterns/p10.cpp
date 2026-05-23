#include <iostream>
using namespace std;

// Half Diamond Pattern
int main() {
    int n;
    cout <<"Enter the number of rows: ";
    cin>>n;

    int totalRows = 2*n -1 ;

    for (int i = 1; i <= totalRows; i++){
        int stars = i <= n ? i : totalRows - i + 1;
        for (int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }


}