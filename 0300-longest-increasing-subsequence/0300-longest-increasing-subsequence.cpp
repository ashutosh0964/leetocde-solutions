class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=0;
        }
        dp[0]=1;
        int totalmax=0;
        for(int i=0;i<nums.size();i++){
            int max=0;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(dp[j]>=max){
                        max=dp[j];
                    }
                }
            }
            dp[i]=max+1;
            if(totalmax<=dp[i]){
                totalmax=dp[i];
            }
            
        }
        return totalmax;
        
        
    }
};