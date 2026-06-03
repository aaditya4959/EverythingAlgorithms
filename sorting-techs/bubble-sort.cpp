#include <iostream>
using namespace std;


void bubbleSort(vector<int> &arr){
    int k = arr.size();
    for ( int i = 0 ; i<k ; i++){
        for (int j = 0 ; j<k-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
     vector<int> arr = {2,34,5,23,6,435,43,6,3};

    bubbleSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}