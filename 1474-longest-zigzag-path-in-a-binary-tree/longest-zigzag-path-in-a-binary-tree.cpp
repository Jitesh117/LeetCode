class Solution {
public:
    int longestZigZag(TreeNode* root) {
       int result = 0;
       solve(root, true, 0, result);
       solve(root, false, 0, result);

       return result;
    }

    void solve(TreeNode* root, bool goLeft, int count, int &result){
        if(!root) return;

        result = max(result, count);

        if(goLeft){
            solve(root -> left, false, count + 1, result);
            solve(root -> right, true, 1, result);
        }
        else{
            solve(root -> right, true, count + 1, result);
            solve(root -> left, false, 1, result);
        }
    }
};