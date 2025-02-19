import java.util.ArrayList;
import java.util.Arrays;

public class Solution {

    public static void rotate(ArrayList<Integer> nums, int k) {
        k %= nums.size();
        int startingIndex = nums.size() - k;

        ArrayList<Integer> list = new ArrayList<>();

        for (int x = startingIndex; x < nums.size(); x++) {
            list.add(nums.get(x));
        }

        for (int x = 0; x < startingIndex; x++) {
            list.add(nums.get(x));
        }

        for (int i = 0; i < nums.size(); i++) {
            nums.set(i, list.get(i));
        }
    }

    public static void main(String[] args) {
        ArrayList<Integer> input = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));

        rotate(input, 3);

        for (int x : input) {
            System.out.print(x + " ");
        }
    }
}
