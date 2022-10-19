class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans(26,0);
            for(int i=0;i<s.size();i++){
                ans[s[i]-'a']=i;
            }
        int end=0;
        int start=0;
        vector<int>res;
        for(int i=0;i<s.size();i++){
            end=max(end,ans[s[i]-'a']);
            if(end==i){
                res.push_back(i-start+1);
                start=i+1;
            }
            
        }
        return res;
    }
};