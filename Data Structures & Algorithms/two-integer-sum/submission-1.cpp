class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        for (int i = 0; i<nums.size();i++){
            ans[nums[i]] = i;
        }
        for (int i = 0; i<nums.size();i++){
            int bal = target - nums[i];
            if (ans.count(bal) && i != ans[bal]){
                return {i,ans[bal]};
                break;
            }
        }
        return {};
    }
};
