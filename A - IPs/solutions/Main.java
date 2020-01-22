import java.io.PrintWriter;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
        int t = in.nextInt();
        in.nextLine();
        while (t-- > 0) {
            String[] ips = in.nextLine().split("\\.");
            for (int i = 0; i < ips.length; i++) {
                String ip = Integer.toBinaryString(Integer.parseInt(ips[i]));
                String binary = String.format("%8s", ip).replace(' ', '0');
                out.print(binary);
                if (i < 3)
                    out.print(".");

            }
            out.println();
        }
        out.close();
    }
}