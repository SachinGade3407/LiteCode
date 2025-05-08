/*write a program to print the following pattern
Row =5;
O
14 13
L K J
9 8 7 6
E D C B A

Row = 4
10
I H
7 6 5
D C B A
*/

import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();
        int num = 0;
        char ch = 'O';

        for(int i = 1; i <= row; i++) {
            for(int j = 1; j <= i; j++) {
                if(i % 2 != 0) {
                    System.out.print(ch + " ");
                    ch++;
                }
                else {
                    System.out.print(num + " ");
                    num--;
                }
            }
            if(i % 2 != 0) {
                ch--;
            }
            else {
                num += i + 4;
            }
            System.out.println();
        }
    }
}

