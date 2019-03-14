#include <iostream>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	bool isValidBST(TreeNode* root) {
		return isValidBST(root, NULL, NULL);
	}
	bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
		if (!root)
			return true;
		if (minNode && minNode->val >= root->val || maxNode && maxNode->val <= root->val)
			return false;
		return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
	}
};