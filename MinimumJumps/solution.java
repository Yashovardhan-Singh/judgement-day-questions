import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = sc.nextInt();

            int jumps = 0, currentEnd = 0, farthest = 0;
            boolean possible = true;

            for (int i = 0; i < n - 1; i++) {
                farthest = Math.max(farthest, i + a[i]);

                if (i == currentEnd) {
                    if (farthest <= i) {
                        possible = false;
                        break;
                    }
                    jumps++;
                    currentEnd = farthest;
                    if (currentEnd >= n - 1) 
                        break;
                }
            }

            if (possible && currentEnd >= n - 1) 
                System.out.println(jumps);
            else 
                System.out.println(-1);          
        }
        sc.close();
    }
}
