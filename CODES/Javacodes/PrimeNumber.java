public class PrimeNumber {
    public static void main(String[] args) {
        int num = 8, count = 0;
        for (int i = 2; i < num/2; i++){
            if (num%i == 1) {
                count ++;
                break;
            }
        }
        System.out.println(count == 0? "Prime" : "Not Prime");
    }
}
