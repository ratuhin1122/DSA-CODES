#include <iostream>
#include <algorithm> // Required for std::swap
using namespace std;

// Change return type to float
float fractionalKnapsack(float wt[], float itemPrice[], int n, int capacity) { 
    
    int index[n];
    for (int i = 0; i < n; i++)
    {
        index[i] = i;
    }

    // Sort Items by price / weight (ratio) in desc order
    // Using a simple Bubble Sort for demonstration, though more efficient sorts exist
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Calculate ratios for comparison
            float r1 = itemPrice[index[i]] / wt[index[i]];
            float r2 = itemPrice[index[j]] / wt[index[j]];
            
            // Swap indices if ratio r1 is less than ratio r2 (for descending order)
            if (r1 < r2)
            {
                swap(index[i], index[j]);
            }
        }
    }
    
    float totalProfit = 0.0;
    float currentCapacity = (float)capacity; // Use float for capacity to avoid potential issues in calculations

    cout << "--- Items Taken ---" << endl;
    for (int i = 0; i < n && currentCapacity > 0; i++)
    {
        int item = index[i];
        
        // Take the whole item if its weight is less than or equal to remaining capacity
        if (wt[item] <= currentCapacity)
        {
            currentCapacity -= wt[item];
            totalProfit += itemPrice[item];
            cout << "Item Index: " << item << ", Weight Taken: " << wt[item] << ", Profit Added: " << itemPrice[item] << endl;
        }
        // Take a fraction of the item
        else
        {
            float fraction = currentCapacity / wt[item];
            float profitAdded = fraction * itemPrice[item];
            totalProfit += profitAdded;
            
            cout << "Item Index: " << item << ", Weight Taken: " << currentCapacity << ", Profit Added: " << profitAdded << " (Fraction: " << fraction << ")" << endl;
            currentCapacity = 0; // Knapsack is full
        }
    }

    cout << "-------------------" << endl;
    cout << "Total Profit: " << totalProfit << endl;
    
    // Correctly return the float profit
    return totalProfit; 
}

int main (){
    int cap = 50;
    float itemPrice[] = {60, 100, 120};
    float wt[] = {10, 20, 30};
    int n = sizeof(itemPrice) / sizeof(itemPrice[0]);

    // The cout here will print the value returned by the function
    cout << "Final Return Value: " << fractionalKnapsack(wt, itemPrice, n, cap) << endl;

    return 0;
}