#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        char myChar = 'A';
        int characterAscii = (int)myChar;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)characterAscii << " ";
            characterAscii+=1;
        }
        cout<<endl;
    }

    return 0;
}