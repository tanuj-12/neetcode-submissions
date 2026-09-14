class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxarea=0;
        while(left<right){
            int area=(right-left)*min(heights[left],heights[right]);
            if(area>maxarea){
                maxarea=area;

            }
            if(heights[left]<=heights[right]) left++;
            else right--;
        }
        return maxarea;
    }
};
