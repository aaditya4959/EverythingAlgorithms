#include <iostream>
using namespace std;


int main (){

    int row;
    cout <<"Enter the number of rows: ";
    cin>>row;

    int asciiValue = 'A';
    for(int i = 1; i<=row ; i++){
        for(int j = 1; j<=i ;j++){
            cout<<(char)asciiValue<<" ";
        }
        cout<<endl;
        asciiValue+=1;
    }

    return 0;
}