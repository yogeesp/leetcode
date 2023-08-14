//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        
        vector<int> arr;
        arr.push_back(0);
        
        arr.push_back(1);
        
        int a =0,b=1;
        
        for(int i = 2;i<=n;i++){
            int temp = (a+b)%1000000007;
            a = b;
            b = temp;
            arr.push_back(temp);
        }
        
        return arr[n];
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