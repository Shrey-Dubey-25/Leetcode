class Solution {
public:
    void helper(int pos, int n, std::vector<int>& arrangement, std::vector<bool>& used, int& count) {
    if (pos == n + 1) {
        count++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i] && (i % pos == 0 || pos % i == 0)) {
            used[i] = true;
            arrangement[pos] = i;
            helper(pos + 1, n, arrangement, used, count);
            used[i] = false;
        }
    }
}

int countArrangement(int n) {
    vector<int> arrangement(n + 1);
    vector<bool> used(n + 1, false);
    int count = 0;
    helper(1, n, arrangement, used, count);
    return count;
}
};