class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum==k) count++;
            int diff = sum-k;
            if(umap.find(diff)!=umap.end()) count+=umap[diff];   
            umap[sum]++;
        }    
        return count;
    }
};