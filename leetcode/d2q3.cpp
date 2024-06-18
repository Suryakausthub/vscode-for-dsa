//101. Symmetric Tree
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
            return root==null || Symmetric(root.left, root.right);
        }
        private boolean Symmetric(TreeNode left, TreeNode right){
            if(left == null || right == null){
                return left == right;
            }
            if(left.val != right.val){
                return false;
            }
            return Symmetric(left.left, right.right) && Symmetric(left.right,right.left);
        } 
    }
