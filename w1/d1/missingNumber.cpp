class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans,sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
        }
        ans = (n*(n+1))/2 - sum;
        return ans;
    }
};