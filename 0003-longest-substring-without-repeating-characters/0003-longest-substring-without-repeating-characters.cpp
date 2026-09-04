class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; i++) {

            vector<char> ans;

            ans.push_back(s[i]);

            for (int j = i + 1; j < n; j++) {

                bool found = false;

                for (int k = 0; k < ans.size(); k++) {
                    if (s[j] == ans[k]) {
                        found = true;
                        break;
                    }
                }

                if (found) {
                    break;
                }

                ans.push_back(s[j]);

                // count = max(count, (int)ans.size());
            }

            count = max(count, (int)ans.size());
        }

        return count;
    }
};