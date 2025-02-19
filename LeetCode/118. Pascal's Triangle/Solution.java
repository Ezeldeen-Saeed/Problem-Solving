class Solution {
    public List<List<Integer>> generate(int numRows) {
        
        List<List<Integer>> list = new ArrayList<>();

        for (int x = 0; x <= numRows -1; x++) {
            List<Integer> row = new ArrayList<>();

            for (int j = 0; j <= x; j++) {
                if (j == 0 || j == x) {
                    row.add(1);
                } else {
                    row.add(list.get(x - 1).get(j - 1) + list.get(x - 1).get(j));
                }
            }

            list.add(row);
            
        }

        return list;
    }
}
