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
			// push ��������ջ
			s.push(p);
			p = p->left;
		}
		else {
			// ������Ϊ��ʱ�����ʸýڵ㣬Ȼ�����������
			p = s.top();
			result.push_back(p->val);
			s.pop();
			p = p->right;
		}
	}
	return result;
}

int main() {
	TreeNode *A;
	TreeNode *B;
	A = (TreeNode*)malloc(sizeof(TreeNode));
	A->val = 1;
	A->left = (TreeNode*)malloc(sizeof(TreeNode));
	A->right = NULL;
	B = A->left;
	B->val = 2;
	B->left = (TreeNode*)malloc(sizeof(TreeNode));
	B->right = NULL;
	B->left->left = NULL;
	B->left->right = NULL;
	B->left->val = 3;
	inorderTraversal(A);
	int c = 0;
}