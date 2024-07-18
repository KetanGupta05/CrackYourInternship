class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                return nums[i];
            }
            else{
                mp[nums[i]]==1;
            }
        }
        return 0;
            
        
        
    }
};
