
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = (matrix.size()*matrix[0].size())-1;
        int n = matrix[0].size();
        while (left <= right){
            int mid = left+(right-left)/2;
            int row = (mid/n);
            if (matrix[row][mid%n] == target){
                return true;
            }
            else if (matrix[row][mid%n] < target){
                left = mid+1;
            }
            else if (matrix[row][mid%n] > target){
                right = mid-1;
            }
        }
        return false;
    }
};
