/*
write a program to print the following pattern
D4 C3 B2 A1
A1 B2 C3 D4
D4 C3 B2 A1
A1 B2 C3 D4
*/


import java.util.Scanner;

class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();

        for(int i = 1; i <= row; i++) {
            if(i % 2 == 0) {
                for(int j = 1; j <= 4; j++) {
                    System.out.print((char)('A' - 1 + j) + "" + j + " ");
                }
            } else {
                for(int j = 4; j >= 1; j--) {
                    System.out.print((char)('A' - 1 + j) + "" + j + " ");
                }
            }
            System.out.println();
        }
    }
}

