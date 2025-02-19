import java.util.*;

public class Program {
	public static int[] arrayOfMultiples(int num, int length) {

        int[] multiples = new int[length];

        for (int x = 1; x <= length; x++) {
            multiples[x -1] = x * num;
        }

        return multiples;
    }
}
