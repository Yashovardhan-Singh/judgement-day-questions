import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());
        StringTokenizer st = new StringTokenizer(br.readLine());

        HashMap<Integer, Integer> firstSeen = new HashMap<>();
        firstSeen.put(0, -1);

        int balance = 0;
        int answer = 0;

        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(st.nextToken());

            balance += (x == 1) ? 1 : -1;

            if (firstSeen.containsKey(balance)) {
                answer = Math.max(answer, i - firstSeen.get(balance));
            } else {
                firstSeen.put(balance, i);
            }
        }

        System.out.println(answer);
    }
}
