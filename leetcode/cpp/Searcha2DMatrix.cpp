//
// Created by zz on 2018/1/27.

// Time:  O(logm + logn)
// Space: O(1)

#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        if (matrix.empty()) {
            return false;
        }

        // Treat matrix as 1D array.
        const int m = matrix.size();
        const int n = matrix[0].size();
        int left = 0;
        int right = m * n - 1;


        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[mid / n][mid % n] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }


        if (left != m * n && matrix[left / n][left % n] == target) {
            return true;
        }

        return false;
    }
};