//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int n=str1.size();
	    int m=str2.size();
	    int arr[n+1][m+1];
	    memset(arr,0,sizeof(arr));
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(str1[i]==str2[j]){
	                arr[i+1][j+1]=1+arr[i][j];
	                maxi=max(maxi,arr[i+1][j+1]);
	            }
	            else{
	                arr[i+1][j+1]=max(arr[i][j+1],arr[i+1][j]);
	            }
	            
	        }
	    }
	    return str1.size()+str2.size()-2*maxi;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends