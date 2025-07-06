#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i =0; i < n-1; i++){
        bool swapped = false; // initial value false 
        for( int j = 0; j < n-1-i; j++){
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            
        }
        if (swapped == false) // Alreary Sorted
        {
            break;
        }
        
    }
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
   
    

}

int main() {
    int size = 5;
    int arr[] = {4,1,5,2,3};
    bubbleSort(arr, size);

    return 0;
}