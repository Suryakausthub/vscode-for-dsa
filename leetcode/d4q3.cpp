/**701. Insert into a Binary Search Tree

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root , val);
    }
    
public:
    TreeNode* insert(TreeNode* root,  int v){
         if (root == nullptr) {
            return new TreeNode(v);
        }
        if(root->val > v){
             root->left = insert(root->left, v);
        }
        else{
             root->right = insert(root->right, v);
        }
        return root;
    }
    

};

void inorder(TreeNode* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

