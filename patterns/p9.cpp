#include <iostream>
using namespace std;

int main()
{
	int row;
	cout << "Enter the number of rows: ";
	cin >> row;
	int finalRowStars = 2 * row - 1;
	for (int i = 1; i <= row; i++){
		int stars = 2 * i - 1;
		int spaces = (finalRowStars - stars);
		for (int j = 1; j <= spaces / 2; j++){
			cout << " ";
		}
		for (int j = 1; j <= stars; j++){
			cout << "*";
		}
		for (int j = 1; j <= spaces / 2; j++){
			cout << " ";
		}
		cout << endl;
	}

  int maxStars = 2*row-1;
    for (int i = row; i>=1; i--){
        int spaces = row - i;
        int stars = maxStars - 2*spaces;
        for(int j = 1; j<=spaces ; j++){
            cout << " ";
        }
        for(int j = 1; j<=stars ; j++){
            cout << "*";
        }
        for(int j = 1; j<=spaces ; j++){
            cout << " ";
        }
        cout << endl;
    }

}