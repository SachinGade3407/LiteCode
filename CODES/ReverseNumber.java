public class ReverseNumber {
    public static void main(String[] args) {
        int num = 1123456789, rev = 0;

        while ( num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        System.err.println("ReverseNmuber: " + rev);
    }
}
