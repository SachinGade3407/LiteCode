/*write a program to print the following pattern
Row =4
0
1 1
2 3 5
8 13 21 34
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();

        int num1 = 0, num2 = 1, num3;

        for(int i = 1; i <= row; i++) {
            num3 = num1 + num2;
            for(int j = 1; j <= i; j++) {
                System.out.print(num1 + " ");
                num1 = num2;
                num2 = num3;
                num3 = num1 + num2;
            }
            System.out.println();
        }
    }
}

