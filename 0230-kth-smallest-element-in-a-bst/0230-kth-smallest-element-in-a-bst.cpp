/**
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
    deque<TreeNode*> stac;
    while (true) {
        while (root) {
            stac.push_front(root);
            while (stac.size() > k)
                stac.pop_back();
            root = root->left;
        }
        root = stac.front();
        stac.pop_front();
        if (! --k)
            return root->val;
        root = root->right;
    }
}
};