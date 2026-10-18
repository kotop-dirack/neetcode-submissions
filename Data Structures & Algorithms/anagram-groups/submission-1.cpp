class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash;
        vector<vector<string>>ans;
        for (int i = 0; i<strs.size();i++){
            string k = strs[i];
            sort(strs[i].begin(),strs[i].end());
            hash[strs[i]].push_back(k);
        }
        for (const auto& [key,val] : hash){
            ans.push_back(val);
        }
        return ans;
    }
};
    

