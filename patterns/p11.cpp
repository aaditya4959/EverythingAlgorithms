#include <iostream>
using namespace std;

// flag approach is wrong in here (need to change)

int main(){

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i = 1; i<=row ; i++){
        int start = i%2 ? 1 : 0;

        for(int j = 1; j<=i ; j++){
            cout<<start;
            start = !start;
        }
        cout<<endl;
    }

    return 0;
}