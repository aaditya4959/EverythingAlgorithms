#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int charAscii = 'A';
    for(int i = 1; i<=row ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<(char)(charAscii+row-i+j-1)<<" ";

        }
        cout<<endl;
    }
    return 0;
}