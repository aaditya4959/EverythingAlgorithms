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

int sumOfN(int N){
    if(N == 0){
        return 0;
    }
    return  N + sumOfN(N-1);
}

int factorial(int N){
    if(N == 0 || N == 1){
        return N;
    }
    return N*factorial(N-1);
}




int main(){
    cout<<factorial(5)<<endl;
    return 0;
}
