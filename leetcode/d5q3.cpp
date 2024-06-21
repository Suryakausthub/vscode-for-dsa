/**112. Path Sum
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int count = 0;
        return path(count, root, targetSum);
    }
    
private:
    bool path(int count, TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }

        count += root->val;

        if (root->left == nullptr && root->right == nullptr) {
            return count == targetSum;
        }
        return path(count, root->left, targetSum) || path(count, root->right, targetSum);
    }
};
