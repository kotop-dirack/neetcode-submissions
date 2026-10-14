class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(),nums.end());
        int longest = 0;
        int length = 1;
        for (auto n : nums_set){
            if (nums_set.find(n-1) == nums_set.end()){
                while (nums_set.find(n+length) != nums_set.end()){
                    length++;
                }
                longest = max(longest,length);
                length = 1;
            }
        }
        return longest;
    }
};
