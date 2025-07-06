#include <iostream>
using namespace std;

 int binarySearch(int arr[], int n, int tar){
    int start = 0;
    int end = n - 1;
   

    while (start <= end)
    {   
        int mid = (start + end) / 2;
        if (tar > arr[mid])
        {
            start = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else{
            return mid;
        } 
        
    }
    return -1;
    
 }

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Array must be sorted for binary search
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    int index = binarySearch(arr, size, target);
    if (index >= 0) {  
        cout << "Found at " << index << " index";
    } else {
        cout << "Not Found";
    }
    return 0;
}