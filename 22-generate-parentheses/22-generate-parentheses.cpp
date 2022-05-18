class Solution {
public:
    /*
    Create a helper function to recurse
    */
    
    
    void helper(vector<string> &v, string s, int left, int right) {
        // Base case: if there are no more left & right parens, return and add to vector
        if(left == 0 && right == 0) {
            v.push_back(s);
            return;
        }
        
        // if right paren exists, append ) and decrement int right
        if(right > 0){
            helper(v, s+")", left, right-1);
        }
        
        // if left paren exists, append (, decrement left, but add right bc you need to close it
        if(left > 0) {
            helper(v, s+"(", left-1, right+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res, "", n, 0);
        return res;
    }
};