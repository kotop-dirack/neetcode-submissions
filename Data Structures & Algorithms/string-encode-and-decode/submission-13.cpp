class Solution {
   public:
    string encode(vector<string>& strs) {
        string s = "";
        for (int i = 0; i<strs.size();i++){
            s += to_string(strs[i].size());
            s += '#';
            s += strs[i];
        }
        if (s.empty()) {return s;}
        return s;
    }

    vector<string> decode(string s) {
        if (s.empty()) {return {};}
        vector<string>ans;
        int j = 0;
        for (int i = 0; i<s.size();){
            while (s[j] != '#'){
                j++;
            }
            int length_of = stoi(s.substr(i,j-i));
            ans.push_back(s.substr(j+1,length_of));
            j += length_of+1;
            i = j;
        }
        return ans;
    }
};
