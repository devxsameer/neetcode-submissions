class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let map = new Set()
        for(let num of nums){
            if(map.has(num)){
                return true
            }
            map.add(num)
        }
        return false
    }
}
