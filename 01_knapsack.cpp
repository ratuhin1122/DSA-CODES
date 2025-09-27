#include <bits/stdc++.h>
using namespace std;
int dp[10][10];

int knapsack_01(int profit[], int weight[], int capacity, int size) {
    // Base case: if no items left or no capacity left
    if (capacity == 0 || size == 0) {
        return 0;
    }
    
    // If already calculated, return stored value
    if (dp[size][capacity] != -1) {
        return dp[size][capacity];
    }
    
    // CRITICAL FIX: Check if current item can fit
    if (weight[size-1] > capacity) {
        // Item too heavy, skip it
        return dp[size][capacity] = knapsack_01(profit, weight, capacity, size-1);
    }
    else {
        // Two choices: Include or Exclude
        int include = profit[size-1] + knapsack_01(profit, weight, capacity - weight[size-1], size-1);
        int exclude = knapsack_01(profit, weight, capacity, size-1);
        return dp[size][capacity] = max(include, exclude);
    }
}

int main() {
    int profit[] = {1, 7, 11, 5};
    int weight[] = {1, 2, 3, 4};
    int capacity = 5;
    
    // Initialize DP table with -1
    memset(dp, -1, sizeof(dp)); 
    
    int size = sizeof(profit)/sizeof(profit[0]);
    int result = knapsack_01(profit, weight, capacity, size);

    cout << "Maximum profit: " << result << endl;

    return 0;
}