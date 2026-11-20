class TimeMap {
public:
    map<string,vector<pair<string,int>>>mas;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mas[key].push_back(make_pair(value,timestamp));
    }
    
    string get(string key, int timestamp) {
        vector<pair<string,int>>& bal = mas[key];
        int l = 0;
        int r = bal.size()-1;
        int mid = 0;
        while (l<=r){
            mid = l + (r-l)/2;
            if (bal[mid].second == timestamp){
                return bal[mid].first;
            }
            else if (bal[mid].second > timestamp){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if (r < 0) return ""; 
        return bal[r].first;
        
    }
};
