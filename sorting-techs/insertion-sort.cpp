#include <iostream>
using namespace std;

// This is the actual implementation of insertion sort but this is also wrong ( find the catch yourself now )
void insertionSort(vector<int> &arr){
    int size = arr.size();
    for(int i = 1 ; i<size ; i++){
        int j = i-1;
        while(j>=0 && arr[j]> arr[i]){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = arr[i];
    }
}


int main(){
    vector<int> arr = {2,34,5,23,6,435,43,6,3};

    insertionSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}