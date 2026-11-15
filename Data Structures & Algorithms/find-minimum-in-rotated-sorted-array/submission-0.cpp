class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size()-1;
        int cur_res = nums[0];
        while (l <= r){
            if (nums[l] <= nums[r]){
                cur_res = min(cur_res,nums[l]);
                break;
            }
            int mid = l+(r-l)/2;
            cur_res = min(cur_res,nums[mid]);
            if (nums[mid] >= nums[l]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return cur_res;
    }
};
