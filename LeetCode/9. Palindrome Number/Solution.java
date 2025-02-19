class Solution {
    public static boolean isPalindrome(int x) {
        
        int temp, reverse;
        temp = Math.abs(x);
        reverse = 0;

        while (temp != 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp /= 10;
        }

        if (reverse == x) {
            return true;
        } else {
            return false;
        }
        
    }

    public static void main(String[] args) {
        if (isPalindrome(121)) {
            System.out.println(true);
        } else {
            System.out.println(false);
        }

    }
}
