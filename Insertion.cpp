#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = arr[i] - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1 ] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
        
    }

    // Print the Loop
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 5;
    int arr[] = { 4,1,5,2,3};
    insertionSort(arr,size);
    return 0;
}