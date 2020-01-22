import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int v = in.nextInt();
            int l = in.nextInt();
            int[] tab = new int[n];
            for (int i = 0; i < n; i++) {
                tab[i] = in.nextInt();
            }
            int j = 0, nbr = 0;
            while (j < v) {
                nbr += tab[j++];
            }
            int min = nbr;
            while (j < n) {
                nbr -= tab[j - v];
                nbr += tab[j++];
                min = Math.min(min, nbr);
            }
            System.out.println(l - min);
        }
    }
}