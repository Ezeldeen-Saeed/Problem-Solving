public class Solution {


    public static int truesNumber(boolean[] arr) {
        if (arr.length == 0)
            return 0;

        int counter = 0;

        for (int x = 0; x <= arr.length; x++) {
            if (arr[x])
                counter++;
        }

        return counter;
    }


    public static void main(String[] args) {

    }
}
