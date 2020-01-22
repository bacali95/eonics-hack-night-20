import java.util.*;
import java.util.Map.Entry;
import java.util.stream.Collectors;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while (t-- > 0) {
            String[] words = in.nextLine().split(" ");
            Map<String, Integer> map = new HashMap<>();
            int i = 0;
            for (String word : words) {
                if (!map.containsKey(word)) {
                    map.put(word, i);
                }
                if (word.startsWith("-")) {
                    if (map.containsKey(word.substring(1))) {
                        map.remove(word.substring(1));
                        map.remove(word);
                    }
                } else {
                    if (map.containsKey("-" + word)) {
                        map.remove("-" + word);
                        map.remove(word);
                    }
                }
                i++;
            }
            List<Entry<String, Integer>> list = map.entrySet().stream().collect(Collectors.toList());
            list.sort((a, b) -> a.getValue().compareTo(b.getValue()));
            for (Entry<String, Integer> entry : list) {
                System.out.print(entry.getKey() + " ");
            }
            System.out.println();
        }
    }
}