class Solution {
    /**
     * @param {string} blocks
     * @param {number} k
     * @return {number}
     */
    minimumRecolors(blocks, k) {
        let W = 0;
        for (let i = 0; i < k; i++) {
            if (blocks[i] === "W") {
                W += 1;
            }
        }
        let res = W;
        for (let i = k; i < blocks.length; i++) {
            if (blocks[i] === "W") {
                W += 1;
            }
            if (blocks[i - k] === "W") {
                W -= 1;
            }
            res = Math.min(res, W);
        }
        return res;
    }
}
