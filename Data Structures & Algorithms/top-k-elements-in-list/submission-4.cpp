class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> hash;
        vector<int> ans;
        unordered_map<int, int> hash_2;
        for (int i = 0; i < nums.size(); i++) {
            hash_2[nums[i]]++;
        }
        for (const auto [key, val] : hash_2) {
            hash.push_back(make_pair(val, key));
        }
        sort(hash.begin(), hash.end(), [](auto a, auto b) { return b.first < a.first; });
        for (int i = 0; i < k; i++) {
            ans.push_back(hash[i].second);
        }
        return ans;
    }
};
