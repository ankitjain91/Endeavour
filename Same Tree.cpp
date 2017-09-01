/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == NULL)
        {
            if(q == NULL)
            {
                return true;
            }
            return false;
        }
        if(q == NULL)
        {
            if(p == NULL)
            {
                return true;
            }
            return false;
        }
        
        if(p->val != q->val)        
        {
            return false;
        }
        
        if(isSameTree(p->left,q->left))
        {
            if(isSameTree(p->right, q->right))
            {
                return true;
            }
            return false;
        }
        return false;
    }
};
