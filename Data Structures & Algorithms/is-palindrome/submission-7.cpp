class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i<s.size();i++){
            if (!isalpha(s[i]) && !isalnum(s[i])) {
            s.erase(i,1);
            i -= 1;
        }
            s[i] = toupper(s[i]);
        }
        
        int right = s.size()-1;
        int left = 0;
        while (left<right){
            if (s[left] == s[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
