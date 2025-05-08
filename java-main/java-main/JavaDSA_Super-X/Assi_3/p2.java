import java.util.Scanner;

class Demo{ 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int Rows = scanner.nextInt();

        for (int i = 1; i <= Rows; i++) {
            for (int j = i; j >= 1; j--) {
                System.out.print(j + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}

