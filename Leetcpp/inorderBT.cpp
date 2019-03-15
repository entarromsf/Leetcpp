#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <stack>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	/*TreeNode(int x) : val(x), left(NULL), right(NULL) {}*/
};
vector<int> inorderTraversal(TreeNode* root) {
	vector<int> result;
	stack<TreeNode*> s;
	if (root == NULL)
		return result;
	TreeNode* p = root;
	while (!s.empty() || p != NULL) {
		if (p != NULL) {
			// push 左子树入栈
			s.push(p);
			p = p->left;
		}
		else {
			// 左子树为空时，访问该节点，然后访问右子树
			p = s.top();
			result.push_back(p->val);
			s.pop();
			p = p->right;
		}
	}
	return result;
}