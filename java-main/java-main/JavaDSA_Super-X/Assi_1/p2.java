import java.util.Scanner;

class Demo{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = input.nextInt();
        input.close();

        int num = 1;

        for (int i = 0; i < rows; i++) {
            int x = num;
            for (int j = 0; j <= i; j++) {
                System.out.print(x + " ");
                x++;
            }
            num += i + 1;
            System.out.println();
        }
    }
}

