//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    vector<int> inedge(n, 0);
    for (int i = 0; i < edges.size(); i++) {
        inedge[edges[i][1]]++;
    }
    queue<int> temp;
    for (int i = 0; i < n; i++) {
        if (inedge[i] == 0) {
            temp.push(i);
        }
    }
    vector<int> dist(n, 1000000000);
    dist[0] = 0;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
    }
    while (!temp.empty()) {
        int l = temp.front();
        temp.pop();
        for (int i = 0; i < adj[l].size(); i++) {
            inedge[adj[l][i].first]--;
            dist[adj[l][i].first] = min(dist[l] + adj[l][i].second, dist[adj[l][i].first]);
            if (inedge[adj[l][i].first] == 0) {
                temp.push(adj[l][i].first);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dist[i]==1000000000){
            dist[i]=-1;
        }
    }
    return dist;
}

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends