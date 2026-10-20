class Solution {
   public:
    bool isValid(string s) {
        unordered_set<char>open{'(','[','{'};
        stack<char>st;
        for (int i = 0; i<s.size();i++){
            if (st.empty()) {st.push(s[i]);}
            else {
                if (open.count(s[i])){
                    st.push(s[i]);
                }
                else{
                    string k;
                    k.push_back(st.top());
                    k.push_back(s[i]);
                    if (k == "()" || k == "[]" || k == "{}"){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if (st.size()==0){
            return true;
        }
        return false;
    }
};
