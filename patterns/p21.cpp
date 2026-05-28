#include <iostream>
using namespace std;


int main(){
    int row;
    cout<<"Enter the numeber of rows: ";
    cin>>row;

    for(int i = 1 ; i<=row ; i++){
        int spaces = row - 2;
        for(int j = 1; j<=row ; j++){
            if(j==1 || j==row || i==1 || i==row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}