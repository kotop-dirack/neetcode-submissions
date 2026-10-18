class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash(nums.begin(), nums.end());
        int start = 0;
        int c = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.count(nums[i] - 1)) {
                continue;
            } else {
                start = nums[i];
                while (hash.count(start)) {
                    c += 1;
                    start += 1;
                }
                ans = max(ans, c);
                c = 0;
            }
        }
        return ans;
    }
};
