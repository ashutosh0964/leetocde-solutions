class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        vector<vector<int>> mem(s.size(), vector<int>(s.size(), -1));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                count+=solve(mem,s,i,j);
            }
        }
        return count;
    }
        int solve(vector<vector<int>>& mem, string& s, int i, int j) {
        if (i >= j) return 1;
        if (mem[i][j] >= 0) return mem[i][j];
        return mem[i][j] = s[i] == s[j] ? solve(mem, s, i+1, j-1) : 0;
    }
};