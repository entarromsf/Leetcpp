#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <stack>
using namespace std;
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	vector<int> preorder(Node* root) {

	}
};