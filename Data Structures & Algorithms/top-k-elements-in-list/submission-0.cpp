class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        while (k--) {
            int largest = INT_MIN;
            int ele=-1;

            for (auto& p : mp) {
                if(p.second>largest){
                    largest=p.second;
                    ele=p.first;
                }
            }
            ans.push_back(ele);
            mp.erase(ele);
            

            
        }
        return ans;
    }
};
