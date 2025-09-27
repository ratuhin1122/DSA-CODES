
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[50];
int fibo(int n){
    if (n == 0 or n== 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }else {

        return dp[n] =  fibo(n-1) + fibo(n-2);
    }
    

}
int main (){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }
    cout << endl;
    

    
    return 0;
}