/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> vec;
        order(root, vec);
        return vec;
    }
    
public:
    void order(Node* root, vector<int>& vec){
        if(root == NULL) return;
        
        for(int i=0; i<root->children.size();i++){
            order(root->children[i], vec);
        }
        
        vec.push_back(root->val);
    }
};