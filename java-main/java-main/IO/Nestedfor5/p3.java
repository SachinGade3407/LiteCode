/*write a program to print the following pattern
5 4 3 2 1
8 6 4 2
9 6 3
8 4
5
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();

        int num = 5;
        for(int i = 1; i <= row; i++) {
            for(int j = row; j >= i; j--) {
                System.out.print(num + " ");
                num--;
            }
            System.out.println();
        }

        num = 8;
        for(int i = 1; i <= row; i++) {
            for(int j = row - i; j >= 1; j--) {
                System.out.print(num + " ");
                num -= 2;
            }
            System.out.println();
            num += (i * 2) + 1;
        }
    }
}

