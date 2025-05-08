import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int x = scanner.nextInt();

        if (isPalindrome(x)) {
            System.out.println( x + " is a palindrome number.");
        } else {
            System.out.println(x + " is not a palindrome number.");
        }

        scanner.close();
    }
  
  static boolean isPalindrome(int num) {
        int originalNum = num;
        int reversedNum = 0;

        while (num > 0) {
            int remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num = num / 10;
        }

        return originalNum == reversedNum;
    }
}

