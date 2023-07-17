    int majorityElement(vector<int>& nums) {
        int cnt=0,ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ans=nums[i];
                cnt++;
            }
            else if(nums[i]!=ans){
                cnt--;
            }
            else
                cnt++;
        }
        return ans;
    }