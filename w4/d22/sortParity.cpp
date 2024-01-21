class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++)
            (nums[i]%2==0) ? even.push_back(nums[i]) : odd.push_back(nums[i]);
            
        for(int i=0;i<even.size();i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        return ans;
    }
};