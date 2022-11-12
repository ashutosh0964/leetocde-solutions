class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=1;i<=nums.size();i++){
            freq[i]=0;
        }
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>res;
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};