//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int n)
	{
	    // Code here
	    int mod=1e9+7;
	    int long long arr[n+1];
	    arr[1]=2;
	    arr[2]=3;
	    for(int i=3;i<=n;i++){
	        arr[i]=(arr[i-1]+arr[i-2])%mod;
	    }
	    return (arr[n]%mod*arr[n]%mod)%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends