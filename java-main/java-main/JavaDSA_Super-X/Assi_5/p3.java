import java.util.Scanner;
class Demo{
    static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
	static boolean isStrongNumber(int number) {
        int originalNumber = number;
        int sumOfFactorialOfDigits = 0;
        while (number > 0) {
            int digit = number % 10;
            sumOfFactorialOfDigits += factorial(digit);
            number /= 10;
        }
        return originalNumber == sumOfFactorialOfDigits;
}
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = sc.nextInt();

        if (isStrongNumber(number)) {
            System.out.println(number + " is a strong number.");
        } else {
            System.out.println(number + " is not a strong number.");
        }

        sc.close();
    }
}

