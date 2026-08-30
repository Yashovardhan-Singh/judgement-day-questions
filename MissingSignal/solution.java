import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());
        StringTokenizer st = new StringTokenizer(br.readLine());

        int xor = n;

        for (int i = 0; i < n; i++) {
            xor ^= i;
            xor ^= Integer.parseInt(st.nextToken());
        }

        System.out.println(xor);
    }
}

