class Solution {
public:
    int romanToInt(string s) {
        map<char, int> luu = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && luu[s[i]] < luu[s[i + 1]]) {
                result += luu[s[i + 1]] - luu[s[i]];
                i++;
            } else {
                result += luu[s[i]];
            }
        }
        return result;
    }
};