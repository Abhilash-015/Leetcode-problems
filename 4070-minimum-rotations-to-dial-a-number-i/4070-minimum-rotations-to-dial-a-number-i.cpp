class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
    int current = 0;  // Pointer initially at 0

    for (char ch : s) {
        int next = ch - '0';

        int diff = abs(current - next);

        // Either move directly or go around the circle
        ans += min(diff, 10 - diff);

        current = next;
    }

    return ans;
    }
};