import java.io.PrintWriter;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        int n = in.nextInt();
        String s = in.next();
        int[] ans = new int[n];
        for (int k = 1; k < n - 1; k++) {
            if (s.charAt(k) != s.charAt(k + 1) && s.charAt(k) != s.charAt(k - 1)) {
                ans[k] = -1;
                if (ans[k - 1] != -1)
                    ans[k - 1] = 1;
                if (ans[k + 1] != -1)
                    ans[k + 1] = 1;
            }
        }
        for (int k = 0; k < n; k++) {
            if (ans[k] == -1)
                out.println("losing");
            else if (ans[k] == 1)
                out.println("winning");
            else
                out.println("draw");
        }
        out.close();
    }
}