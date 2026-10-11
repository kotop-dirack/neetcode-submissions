class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, string>> help;  // {ключ, слово}
        for (const string& s : strs) {
            string k = s;
            sort(k.begin(), k.end());
            help.push_back({k, s});
        }
        sort(help.begin(), help.end());

        vector<vector<string>> ans;
        for (int i = 0; i < help.size(); i++) {
            if (i == 0 || help[i].first != help[i - 1].first) {
                ans.push_back({});
            }
            ans.back().push_back(help[i].second);
        }
        return ans;
    }
};
    

