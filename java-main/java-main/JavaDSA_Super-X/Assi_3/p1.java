import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int Rows = scanner.nextInt();

        System.out.print("Enter the number of columns: ");
        int Cols = scanner.nextInt();

        for (int i = 0; i < Rows; i++) {
            for (int j = 0; j < Cols; j++) {
                if (i % 2 == 0) {
                  
                    System.out.print((char) ('A' + j) + " ");
                } else {
                  
                    System.out.print((char) ('A' + Cols - j - 1) + " ");
                }
            }
            System.out.println();
        }

        scanner.close();
    }
}

