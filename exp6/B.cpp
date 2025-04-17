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
        bool flag = true;
        void solve(TreeNode *root1 , TreeNode *root2){
            if(root1 == nullptr && root2 == nullptr){
                return;
            }
            if(root1==nullptr || root2==nullptr){
                flag= false;
                return;
            }
            if(root1->val != root2->val){
                flag= false;
                return;
            }
            solve(root1->left, root2->right);
            solve(root1->right, root2->left);
        }
        bool isSymmetric(TreeNode* root) {
            solve(root->left, root->right);
            return flag;
        }
    };