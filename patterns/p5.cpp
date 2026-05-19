#include <iostream>
using namespace std;


int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin>>row;

    for(int i = 1; i<= row; i++){
        for(int j = row-i+1 ; j>0 ; j-- ){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}