//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int N) 
    {
        //code here
        vector<long long> fibNumbers(N);
        if (N >= 1) {
            fibNumbers[0] = 1;
        }
        
        if (N >= 2) {
            fibNumbers[1] = 1;
        }
        
        for (int i = 2; i < N; ++i) {
            fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2];
        }
        
        return fibNumbers;
            
        }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends