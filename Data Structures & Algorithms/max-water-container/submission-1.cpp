class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxn = 0;
        int left = 0;
        int right = heights.size()-1;
        while (left < right){
            int h = min(heights[left],heights[right]);
            maxn = max(maxn,((right-left)*min(heights[left],heights[right])));
            while (left < right && heights[left] <= h) {left++;}
            while (left < right && heights[right] <= h) {right--;}
        }
        return maxn;
    }
};
