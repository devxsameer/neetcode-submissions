class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        unordered_set<char> stt;
        int curr = 0, res = 0;
        while(r < s.size()){
            if(stt.contains(s[r])){
                stt.erase(s[l++]);
                curr--;
            }else{
                stt.insert(s[r++]);
                curr++;
            }
            res = max(curr, res);
        }
        return res;
    }
};
