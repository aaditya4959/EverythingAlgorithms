#include <iostream>
using namespace std;


int main(){

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i = row; i>=1 ; i--){
        // Here I have used the implicit conversion of character to asciivallue.
        int charAscii = 'A';
        for(int j = 1; j<=i ; j++){
            cout<<(char)charAscii<<" ";
            charAscii+=1;
        }
        cout<<endl;
    }

    return 0;
}