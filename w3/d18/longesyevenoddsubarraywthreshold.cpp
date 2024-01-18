int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                i++;
                int f=1;
                while(i<nums.size()){
                    if((nums[i-1]%2)==(nums[i]%2) || nums[i]>threshold)
                        break;
                    f++;
                    i++;
                }
                i--;
                ans = ans>f ? ans : f;
            }
        }
        return ans;
    }