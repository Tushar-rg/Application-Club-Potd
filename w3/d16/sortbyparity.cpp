class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> temp;
        int count=0;
        for(int i=0;i<nums.size();i++)
            if((nums[i] & 0x1) == 0)
                temp.push_back(nums[i]);
        for(int i=0;i<nums.size();i++)
            if((nums[i] & 0x1) != 0)
                temp.push_back(nums[i]);
        return temp;
    }
};