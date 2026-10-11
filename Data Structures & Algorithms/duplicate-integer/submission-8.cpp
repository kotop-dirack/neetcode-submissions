class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        stack<int>ans;
        if (nums.size() > 0){
            sort(nums.begin(),nums.end());
            ans.push(nums[0]);
            for (int i = 1; i<nums.size();i++) {
                if (nums[i] == ans.top()) {
                    return true; break;
                }
                else {
                    ans.push(nums[i]);
                }
            }
            return false;
        }    
        return false;
    }
};