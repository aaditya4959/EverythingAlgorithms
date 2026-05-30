#include <iostream>
using namespace std;

int getNumberOfDigits(int x){
    int digits = 0;
    while(x > 0){
        x/=10;
        digits+=1;
    }
    return digits;
}

int reverseNumber(int x){
    int resultNumber = 0;
    while(x>0){
        int digit = x%10;
        resultNumber = (resultNumber*10)+digit;
        x = x/10;
    }
    return resultNumber;
}

bool isNumberPalindrome( int x ){
    int reverse = reverseNumber(x);
    if(x == reverse){
        return true;
    }
    return false;
}

// Optimal approach is the EUCLIDIAN ALGORITHM ( Basically a recursion based algorithm )
int greatestCommonDivisor( int x , int y){ // This is the brute approach and the better approach is just reverse of this.
    int gcd = 1;
    int smaller = min(x,y);
    for(int i = 2; i<=smaller ; i++){
        if(x%i == 0 && y%i == 0){
            gcd = max(gcd, i);
        }
    }
    return gcd;
}


int main(){

    int firstNumber;
    int secondNumber;
    cout<<"Enter the first nummber: ";
    cin>>firstNumber;
    cout<<"Enter the second number: ";
    cin>>secondNumber;

    int gcd = greatestCommonDivisor(firstNumber, secondNumber);
    cout<<"The GCD is : "<<gcd;

    return 0;
}   