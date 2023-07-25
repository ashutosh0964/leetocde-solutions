//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    int mod=1e9+7;
	    int arr[n+1];
	    arr[0]=1;
	    arr[1]=2;
	    arr[2]=3;
	    for(int i=3;i<=n;i++){
	        arr[i]=(arr[i-1]+arr[i-2])%mod;
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
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends