/*Write a program to take a number as input and print the Addition of Factorials of each
digit from that number.
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = input.nextInt();
        int sum = 0;

        while(num > 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }

        System.out.println("Addition of factorials of each digit = " + sum);
    }

    public static int factorial(int n) {
        if(n == 0 || n == 1) {
            return 1;
        }
        else {
            return n * factorial(n - 1);
        }
    }
}

