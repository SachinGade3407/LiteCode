import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = input.nextInt();
        input.close();

        for (int i = 1; i <= rows; i++) {
            int x = i;
            for (int j = 1; j <= i; j++) {
                System.out.print(x + " ");
                x += i;
            }
            System.out.println();
        }
    }
}

