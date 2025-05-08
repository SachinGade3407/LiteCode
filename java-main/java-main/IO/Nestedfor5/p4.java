/*WAP to print all even numbers in reverse order and odd numbers in the standard way. Both separately.
Within a range. Take the start and end from user
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter start number: ");
        int start = input.nextInt();

        System.out.print("Enter end number: ");
        int end = input.nextInt();

        System.out.print("Even numbers in reverse order: ");
        for(int i = end; i >= start; i--) {
            if(i % 2 == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();

        System.out.print("Odd numbers in standard way: ");
        for(int i = start; i <= end; i++) {
            if(i % 2 != 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}

