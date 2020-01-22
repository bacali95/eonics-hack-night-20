import java.util.*;

public class Main {

    static Map<Integer, List<Integer>> adj = new HashMap<Integer, List<Integer>>();
    static boolean[] vis = new boolean[100001];

    static boolean isCycle(int a) {
        if (vis[a]) {
            return true;
        }
        vis[a] = true;
        List<Integer> b = adj.get(a);
        for (int i = 0; i < b.size(); i++) {
            if (isCycle(b.get(i))) {
                return true;
            }
        }
        vis[a] = false;
        return false;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int e = in.nextInt();
        for (int i = 0; i < n; i++) {
            adj.put(i, new ArrayList<Integer>());
        }
        while (e-- > 0) {
            int a = in.nextInt() - 1;
            int b = in.nextInt() - 1;
            adj.get(a).add(b);
        }

        for (int i = 0; i < n; i++) {
            if (isCycle(i)) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}