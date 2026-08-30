class Solution {
    public int missingSignal(int[] signals) {
        int n = signals.length;
        int xor = n;
        for (int i = 0; i < n; i++) {
            xor ^= i;
            xor ^= signals[i];
        }
        return xor;
    }
}
