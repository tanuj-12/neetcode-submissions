class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        vector<pair<int,int>> arr;
        for(auto it : mp){
            arr.push_back({it.first ,it.second});

        }
        sort(arr.begin(),arr.end(),
             [](auto &a,auto &b){
                return a.second > b.second;
             });
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;
            


        
    }
};
