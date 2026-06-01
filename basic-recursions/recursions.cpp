#include <iostream>
using namespace std;

void printNameRecursively(int x, string name){
    if(x == 0){
        return;
    }
    cout<< name <<endl;
    printNameRecursively(x-1,name);
}

void printN(int x, int N){
    if(x > N){
        return;
    }
    cout<<x<<endl;
    printN(x+1, N);
}

void printNBack( int N ){
    if(N == 0){
        return;
    }
    printNBack(N-1);
    cout<<N<<endl;
}


int main(){
    printNBack(10);
    return 0;
}
