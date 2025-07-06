#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int tar){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            return i;
        }
        
    }
    return -1;
    
} 

int main() {
    int size = 5;
    int arr[] = {4,5,3,2,1};
    int target = 2;

    int index = linearSearch(arr, size, target);
    if(index > 0){
        cout << "Found at " << index << " index";
    } else {
        cout << "Not Found";
    }
    return 0;
}