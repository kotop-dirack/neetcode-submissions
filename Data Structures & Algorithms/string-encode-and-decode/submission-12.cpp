class Solution {
   public:
    string encode(vector<string>& strs) {
        string s;
        for (auto& x: strs){
            s += to_string(x.size());
            s += '#';
            s+=x;
        }
        if (s.empty()) {return "";}
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        if (s.empty()) {return ans;}
        int i = 0;
        int j = 0;
        while (j < s.size()){
            if (s[j] != '#'){
                j++;
            }
            else{
                int symbols = stoi(s.substr(i,j-i));
                if (symbols != 0){
                    j+=1;
                    ans.push_back(s.substr(j,symbols));
                    j += symbols;
                    i = j;
                }
                else{
                    ans.push_back("");
                    j+=1;
                    i=j;
                }
            }
        }
        return ans;
    }
};
