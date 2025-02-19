import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        int m, n, board_area;

        Scanner input = new Scanner(System.in);

        m = input.nextInt();
        n = input.nextInt();

        input.close();

        board_area = m * n;

        System.out.println(board_area / 2);

    }
}
