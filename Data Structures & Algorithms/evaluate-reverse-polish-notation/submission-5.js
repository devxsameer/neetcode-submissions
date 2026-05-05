class Solution {
    /**
     * @param {string[]} tokens
     * @return {number}
     */
    evalRPN(tokens) {
        const stack = []
        for(let token of tokens){
            if("+-*/".includes(token)){
                const prev = stack.pop();
                const secPrev = stack.pop();
                if(token === "+"){
                    stack.push(secPrev + prev)
                }else if(token === "-"){
                    stack.push(secPrev - prev)
                }else if(token === "*"){
                    stack.push(secPrev * prev)
                }else if(token === "/"){
                    stack.push(Math.trunc(secPrev / prev))
                }
            }else stack.push(+token)
        }
        if(stack.length === 1) return stack[0];
    }
}
