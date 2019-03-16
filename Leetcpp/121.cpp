//简单动态规划
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0) return 0;
		int mn = prices[0];
		int mp = 0;
		for (int i = 0; i < prices.size(); i++) {
			mp = max(mp, prices[i] - mn);
			mn = min(mn, prices[i]);
		}
		return mp;
	}
};