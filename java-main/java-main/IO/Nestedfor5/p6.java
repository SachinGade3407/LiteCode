/*Write a program, and take two characters if these characters are equal then print them as it is but if
they are unequal then print their difference.
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter first character: ");
        char ch1 = input.next().charAt(0);

        System.out.print("Enter second character: ");
        char ch2 = input.next().charAt(0);

        if(ch1 == ch2) {
            System.out.println("The characters are equal: " + ch1);
        }
        else {
            int diff = Math.abs(ch1 - ch2);
            System.out.println("The difference between " + ch1 + " and " + ch2 + " is " + diff);
        }
    }
}

