class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        const map = new Map();
        for (let num of nums){
            if(!map.has(num)){
                map.set(num, 0)
            }
            map.set(num, map.get(num) + 1)
        }
        const keys = new Map([...map].sort((a, b) => b[1] - a[1])).keys() 
        return Array.from(keys).slice(0,k)
    }
}
