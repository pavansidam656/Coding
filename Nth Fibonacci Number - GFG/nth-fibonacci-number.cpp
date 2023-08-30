//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
const int MOD = 1000000007;
class Solution {
  public:
    int nthFibonacci(int n){
        if (n <= 0)
        return 0;
    
        if (n <= 2)
            return 1;
        
        vector<int> fib(n + 1);
        fib[1] = fib[2] = 1;
        
        for (int i = 3; i <= n; ++i) {
            fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
        }
        
        return fib[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends