class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size(),0);
        stack<pair<int,int>>st; // temp index
        for (int i = 0; i<temperatures.size();i++){
            int bal = temperatures[i];
            while (!st.empty() && bal > st.top().first){
                auto pair = st.top();
                st.pop();
                ans[pair.second] = i-pair.second;
            }
            st.push({bal,i});
        }
        return ans;
    }
};
