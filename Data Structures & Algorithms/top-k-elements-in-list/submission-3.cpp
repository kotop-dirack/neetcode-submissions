class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        vector<pair<int, int>> hash_2;
        for (auto& [key, val] : hash) {
            hash_2.push_back({key, val});
        }

        sort(hash_2.begin(), hash_2.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });
        for (auto& [key, val] : hash_2) {
            if (k != 0) {
                ans.push_back(key);
                k--;
            }
        }
        return ans;
    }
};
