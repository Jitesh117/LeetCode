class Solution {
public:
     unordered_map <int , int > inmap;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0 ; i< inorder.size(); i++){
            inmap[inorder[i]]=i;
        }
        return solve(0, postorder.size()-1, 0, inorder.size()-1,postorder,inorder);
        
    }
    TreeNode* solve(int poststart, int postend, int instart, int inend,vector<int>&postorder,vector<int>&inorder){
        if(poststart>postend || instart>inend){
            return NULL;
        }
        TreeNode* root= new TreeNode(postorder[postend]);
        int inroot= inmap[root->val];
        int eleleft = inroot - instart;
        root->left= solve(poststart, poststart+eleleft-1, instart, inroot-1,postorder,inorder);
        root->right= solve(poststart+eleleft,postend-1,inroot+1, inend ,postorder,inorder  );
        return root;
        
    }
};