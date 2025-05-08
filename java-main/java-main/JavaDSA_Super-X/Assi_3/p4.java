import java.util.Scanner;

class Demo{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the starting number: ");
        int start = scanner.nextInt();

        System.out.print("Enter the ending number: ");
        int end = scanner.nextInt();

        printReversedNumbersInRange(start, end);

        scanner.close();
    }
static void printReversedNumbersInRange(int start, int end) {
        for (int i = start; i <= end; i++) {
            int reversed = reverseNumber(i);
            System.out.println(i + " -> " + reversed);
        }
    }
static int reverseNumber(int num) {
        int reversed = 0;
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }
}

