import java.util.*;

class Solution {
    public int longestBalancedSegment(int[] log) {
        HashMap<Integer, Integer> firstSeen = new HashMap<>();
        firstSeen.put(0, -1);
        int balance = 0;
        int maxLength = 0;

        for (int i = 0; i < log.length; i++) {
            if (log[i] == 1) {
                balance++;
            } else {
                balance--;
            }

            if (firstSeen.containsKey(balance)) {
                maxLength = Math.max(
                    maxLength,
                    i - firstSeen.get(balance)
                );
            } else {
                firstSeen.put(balance, i);
            }
        }

        return maxLength;
    }
}
