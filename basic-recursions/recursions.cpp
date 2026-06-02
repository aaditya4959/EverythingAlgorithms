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


bool isStringPalindrome( string s , int start, int end ){
    if(start>=end){
        return true;
    }
    if(s[start] != s[end]){
        return false ;
    }

    return isStringPalindrome(s, start+1, end - 1);
}

// this can also be done with the help of just two variables.
int fibonacci(int N) {
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N - 1);   
    int slast = fibonacci(N - 2);  

    return last + slast;
}





int main(){
    string s = "shit";
    cout<<isStringPalindrome(s,0,s.length()-1)<<endl;
    return 0;
}
