import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int xor = n;
            for (int i = 0; i < n; i++) {
                xor ^= i;
                xor ^= sc.nextInt();
            }
            System.out.println(xor);
        }
        sc.close();
    }
}
