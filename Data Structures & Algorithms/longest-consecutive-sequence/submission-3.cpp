class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int curr=1;
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if((nums[i]+1)==nums[i+1]){
                curr++;
            }
            else{
                curr=1;
            }
            ans=max(ans,curr);
        }
        return ans;
        
    }
};
