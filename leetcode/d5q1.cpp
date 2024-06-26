/**230. Kth Smallest Element in a BST
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        return v[k-1];
    }
    
void inorder(TreeNode* node,vector<int> &v)
{
    if (node == NULL)
        return;
    inorder(node->left,v);
    v.push_back(node->val);
    inorder(node->right,v);
}
};