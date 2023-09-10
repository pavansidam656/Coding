//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void helper(vector<int> &ans, int present){
        if(present<=0){
            ans.push_back(present);
            return;
        }
        ans.push_back(present);
        helper(ans,present-5);
        ans.push_back(present);
        
    }
    vector<int> pattern(int N){
        // code here
        vector<int> ans;
        helper(ans,N);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends