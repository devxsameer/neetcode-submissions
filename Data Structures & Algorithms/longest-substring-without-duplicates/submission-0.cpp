class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int i = 0,j = 0;
        unordered_set<char> stt;

        while(j < s.length()){
            if(stt.contains(s[j])){
                stt.erase(s[i]);
                i++;
            }else{
                stt.insert(s[j]);
                ++j;
                res = max(res, j - i);
            }
        }

        return res;
    }
};
