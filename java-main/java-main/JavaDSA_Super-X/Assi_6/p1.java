import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        printPattern(rows);
        sc.close();
    }
static void printPattern(int rows) {
        int counter = 1;

        for (int i = 0; i < rows; i++) {
            if (i % 2 == 0) {
                for (char ch = 'A'; ch <= 'D'; ch++) {
                    System.out.print(ch + " ");
                }
            } else {
                for (int j = 0; j < 4; j++) {
                    System.out.print(counter + " ");
                    counter += 2;
                }
            }
            System.out.println();
        }
    }
}

