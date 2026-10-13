class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int count = 0;
        int k = product(nums,count);
        for (int i = 0; i<nums.size();i++){
            if (nums[i] == 0 && count == 1) {
                nums[i] = 1;
                ans.push_back(product(nums,count));
                nums[i] = 0;
                }
            else if (nums[i] == 0 && count>1){
                ans.push_back(0);
            }    
            else{
                ans.push_back(k/nums[i]);
            }
        }
        return ans;
    }
    private:
    long long product(vector<int>& nums,int &count){
        long long prod = 1;
        for (auto& x: nums){
            if (x == 0) {count++;}
            prod *= x;
        }
        return prod;
    }
};
