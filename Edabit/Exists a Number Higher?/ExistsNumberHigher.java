public class ExistsANumberHigher {
	public static boolean existsHigher(int[] arr, int n) {

        for (int x : arr) {
            if (x >= n)
                return true;
        }

        return false;

	}
}
