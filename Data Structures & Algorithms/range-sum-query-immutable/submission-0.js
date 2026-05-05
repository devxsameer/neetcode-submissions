class NumArray {
    /**
     * @param {number[]} nums
     */
    constructor(nums) {
        this.nums = nums
        let prefixSums = new Array(nums.length + 1).fill(0)
        for(let i = 0; i < nums.length + 1; i++){
            prefixSums[i + 1] = prefixSums[i] + nums[i] 
        }
        this.prefixSums = prefixSums
    }

    /**
     * @param {number} left
     * @param {number} right
     * @return {number}
     */
    sumRange(left, right) {
        return this.prefixSums[right + 1] - this.prefixSums[left]
    }
}
