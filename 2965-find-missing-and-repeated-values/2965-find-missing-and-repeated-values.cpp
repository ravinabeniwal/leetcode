class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int repeated = -1;
        int missing = -1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                repeated = arr[i];
                break;
            }
        }
      for (int i = 1; i <= n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == i) {
                    count++;
                }
            }
            if (count == 0) {
                missing = i;
                break;
            }
        }
        return {repeated, missing};
    }
};