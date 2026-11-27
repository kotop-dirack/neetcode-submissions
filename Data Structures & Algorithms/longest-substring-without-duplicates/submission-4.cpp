class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxn = 1;
        if (s.size() == 0) return 0;
        int l = 0;
        int r = l;
        unordered_map<char,int>map;
        while (r < s.size()){
            map[s[r]]++;
            while ( map[s[r]] > 1 ){
                map[s[l]]--;
                l++;
            }
            maxn = max(maxn,r-l+1);
            r++;
        }
        return maxn;
    }
};
