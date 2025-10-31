//coin change-count number of ways

#include <iostream>
#include <cstring> // for memset
using namespace std;
#define mx 1000
int dp[mx][mx];

int coinChange(int coins[], int n, int target){
    
    if(target == 0) return dp[n][target] = 1;; // make the sum already
    if(target < 0 || n == 0) return dp[n][target] = 0; //not possible

    if(dp[n][target] == -1)
        dp[n][target] =  coinChange(coins, n, target - coins[n-1]) +
         coinChange(coins, n-1, target);
    return dp[n][target]; 

    
}


int main (){
    int coins[] = {1,2,3};
    int n = 3;
    int target = 5;
    memset(dp, -1, sizeof(dp));
    cout << coinChange(coins, n, target) << endl;


    return 0;
}