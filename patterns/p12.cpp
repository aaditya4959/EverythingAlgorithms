#include <iostream>
using namespace std;

int main () {
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int maxChar = 2*row;

    for(int i = 1; i <=row ; i++){
        int number = 1;
        for(int j = 1; j<=i ; j++){
            cout<<number++;
        }
        for(int j = i+1; j<=maxChar-i ;j++){
            cout <<" ";
        }
        for(int j = maxChar-i+1; j<=maxChar ; j++){
            cout<<--number;
        }
        cout<<endl;
    }
    return 0;
}