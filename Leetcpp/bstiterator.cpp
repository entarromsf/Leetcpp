#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {//·ÇÕ»ÊµÏÖ
public:
	BSTIterator(TreeNode *root) : now(root) {}

	bool hasNext() {
		return now != nullptr;
	}

	int next() {
		if (!now->left) {
			int val = now->val;
			now = now->right;
			return val;
		}
		else {
			auto pre = now->left;
			while (pre->right && pre->right != now) pre = pre->right;
			if (pre->right) {
				int val = now->val;
				now = now->right;
				pre->right = nullptr;
				return val;
			}
			else {
				pre->right = now;
				now = now->left;
				return next();
			}
		}
	}

private:
	TreeNode* now = nullptr;
};