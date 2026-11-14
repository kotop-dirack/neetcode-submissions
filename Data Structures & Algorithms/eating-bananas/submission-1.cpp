class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int ans = 0;
        int r = *max_element(piles.begin(),piles.end());
        while (l <= r){
            int mid = (l+r)/2;
            if (can(piles,mid,h)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
    bool can(vector<int>& piles, int k, int h){
        long long cur_hours = 0;
        for (int i = 0; i<piles.size();i++){
            cur_hours += (piles[i] + k - 1) / k;
            if (cur_hours > h){
                return false;
            }
        }
        return true;
    }
};
