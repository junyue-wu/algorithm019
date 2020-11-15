/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 */
// @lc code=start
class Solution {
public:
    double nthUglyNumber(int n) {
        priority_queue<double, vector<double>, greater<double> > q;
        double ans = 1;
        for (int i = 1; i < n; i++) {
            q.push(ans * 2);
            q.push(ans * 3);
            q.push(ans * 5);
            ans = q.top();
            q.pop();
            while (!q.empty() && ans == q.top()) q.pop();
        }
        return ans;
    }
};
// @lc code=end

