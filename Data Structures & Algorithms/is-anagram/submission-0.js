class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length !== t.length) return false
        const seenS = {}
        const seenT ={}
        for(const char of s){
            if(char in seenS){
                seenS[char] += 1
            }
            else seenS[char] = 1
        }
        for(const char of t){
            if(char in seenT){
                seenT[char] += 1
            }
            else seenT[char] = 1
        }
        for(const char in seenS){
            if(seenS[char] !== seenT[char]) return false
        }
        return true
    }
}
