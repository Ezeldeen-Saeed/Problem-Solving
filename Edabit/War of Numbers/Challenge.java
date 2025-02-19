public class Challenge {
    public static int warOfNumbers(int[] numbers){

        int evenSums, oddSums;
        evenSums = oddSums = 0;

        for (int x : numbers) {
            if (x % 2 == 0) {
                evenSums += x;
            } else {
                oddSums += x;
            }
        } 

        return Math.abs(evenSums - oddSums);

        
    }
}
