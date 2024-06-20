/**Convert Sorted Array to Binary Search Tree
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == NULL){
            return NULL;
        }
        return create(nums, 0, nums.size()-1);
    }
    
    public: 
    TreeNode* create(vector<int>& nums, int t , int k){
        if(t>k){
            return NULL;
        }
        int mid = (t + k )/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = create(nums, t, mid-1);
        node->right = create(nums, mid+1, k);
        return node;
    }
};
    
    