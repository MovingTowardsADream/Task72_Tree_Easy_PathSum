#include <iostream>

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

 // First solution

 // class Solution {
 // public:
 //     bool result = 0;

 //     bool hasPathSum(TreeNode* root, int targetSum) {
 //         if (root == NULL)
 //             return 0;
 //         int sum = 0;
 //         SumPath(root, sum, targetSum);
 //         return result;
 //     }
 //     void SumPath(TreeNode* node, int sum, int& targetSum){
 //         if (node == NULL || result == 1)
 //             return;
 //         if (node->left == NULL && node->right == NULL && sum+node->val == targetSum)
 //             result = 1;
 //         SumPath(node->left, sum+node->val, targetSum);
 //         SumPath(node->right, sum+node->val, targetSum);
 //     }
 // };

 // Second solution 

class Solution {
public:
    bool result = 0;

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL && root->val == targetSum)
            return 1;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};
