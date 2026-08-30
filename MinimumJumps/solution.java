class Solution {
    public int minimumJumps(int[] a) {
        int n = a.length;

        if (n == 1) 
            return 0;
        

        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;

        for (int i = 0; i < n - 1; i++) {
            farthest = Math.max(farthest, i + a[i]);

            if (i == currentEnd) {
                if (farthest <= i) 
                    return -1;
                

                jumps++;
                currentEnd = farthest;

                if (currentEnd >= n - 1) 
                    return jumps;
                
            }
        }

        return -1;
    }
}
