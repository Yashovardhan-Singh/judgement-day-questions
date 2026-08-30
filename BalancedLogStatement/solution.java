import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            HashMap<Integer, Integer> firstSeen = new HashMap<>();
            firstSeen.put(0, -1);
            int balance = 0, answer = 0;
            for (int i = 0; i < n; i++) {
                int value = sc.nextInt();
                if (value == 1) 
                    balance++;
                else
                    balance--;
                if (firstSeen.containsKey(balance))
                    answer = Math.max(answer, i - firstSeen.get(balance));
                else 
                    firstSeen.put(balance, i);
            }
            System.out.println(answer);
        }
        sc.close();
    }
}
