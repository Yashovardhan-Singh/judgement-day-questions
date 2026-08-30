import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());
        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(st.nextToken());
        }

        int jumps = 0;
        int currentEnd = 0;
        int farthest = 0;

        for (int i = 0; i < n - 1; i++) {
            farthest = Math.max(farthest, i + a[i]);

            if (i == currentEnd) {
                if (farthest <= i) {
                    System.out.println(-1);
                    return;
                }

                jumps++;
                currentEnd = farthest;

                if (currentEnd >= n - 1) {
                    System.out.println(jumps);
                    return;
                }
            }
        }

        System.out.println(-1);
    }
}
