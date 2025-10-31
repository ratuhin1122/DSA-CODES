//coin change-count number of ways

#include <iostream>
#include <cstring> // for memset
using namespace std;
#define mx 1000
int dp[mx][mx];

// Here max is use for 
// Word 1: "ABC" 
// Word 2: "AXY" 
// Last letters don't match ('C' vs 'Y')
// so you have two choice like 
// 1. delete 'C' from word 1
// 2. delete 'Y' from word 2   
// You don't know! So you try both and take the better result (the longer one).

// That's what max() does - it picks the maximum (longest) result from the two options.

int lcs(string &s1, string &s2, int m, int n){
    if( m == 0 || n == 0) {
        return 0;
    }
    if(s1[m-1] == s2[n-1]){
        return 1 + lcs(s1, s2, m-1, n-1);
    } else {
        return max(lcs(s1, s2, m-1, n), lcs(s1, s2, m, n-1));
    }
}


int main (){
    string s1 = "abcde", s2 = "ace";
    int m = s1.size();
    int n = s2.size();

    cout << lcs(s1, s2, m, n) << endl;


    return 0;
}