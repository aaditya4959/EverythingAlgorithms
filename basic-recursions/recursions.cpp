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


void reverseArray(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    swap(arr[start], arr[end]);

    reverseArray(arr, start + 1, end - 1);
}




int main(){
        int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 0, 4);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
