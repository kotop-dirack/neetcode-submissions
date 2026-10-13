class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int k = product(nums);
        for (int i = 0; i<nums.size();i++){
            if (nums[i] == 0) {
                nums[i] = 1;
                ans.push_back(product(nums));
                nums[i] = 0;
                }
            else{
                ans.push_back(k/nums[i]);
            }
        }
        return ans;
    }
    private:
    long long product(vector<int>& nums){
        long long prod = 1;
        for (auto& x: nums){
            prod *= x;
        }
        return prod;
    }
};
