import java.util.*;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        

        List<List<Integer>> lists = new ArrayList<>();
        lists.add(Arrays.asList(1));
        lists.add(Arrays.asList(1, 1));



        for (int x = 2; x <= numRows; x++) {

            lists.set(x, lists.get(x).get(0));

        }

    }
}
