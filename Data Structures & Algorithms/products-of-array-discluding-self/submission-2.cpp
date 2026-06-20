class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod1 = 1;
        vector<int> ans;
        int cnt = 0;
        int index;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                prod1 *= nums[i];
            } else {
                cnt++;
                index = i;
            }
        }
        if (cnt == 0) {
            for (int i = 0; i < n; i++) {
                ans.push_back((prod1) / nums[i]);
            }

        } else if (cnt == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    ans.push_back(prod1);
                } else {
                    ans.push_back(0);
                }
            }
        } else if (cnt > 1) {
            for (int i = 0; i < n; i++) {
                ans.push_back(0);
            }
        }
        return ans;
    }
    
};
