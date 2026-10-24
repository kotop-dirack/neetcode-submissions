class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>vec;
        for (int i = 0; i<position.size();i++){
            vec.push_back(make_pair(position[i],speed[i]));
        }
        sort(vec.rbegin(),vec.rend());
        vector<double>stack;
        for (auto& [key,val] : vec){
            stack.push_back((double)(target-key)/val);
            if (stack.size() >= 2 && stack.back() <= stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
