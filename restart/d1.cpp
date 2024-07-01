class Solution {
public:
    /// Method 1: Recursive Solution
    // This method uses plain recursion to count the number of unique BSTs.
    int numTrees(int n) {
        if (n <= 1) return 1; // Base case: a tree with 0 or 1 node has only 1 structure.
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            // Calculate the number of unique BSTs with `i` as the root
            count += numTrees(i - 1) * numTrees(n - i);
        }
        return count;
    }
};
