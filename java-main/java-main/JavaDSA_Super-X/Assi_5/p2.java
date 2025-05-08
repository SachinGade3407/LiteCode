import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int Rows = sc.nextInt();

        for (int i = 0; i < Rows; i++) {
            char ch = (i % 2 == 0) ? 'a' : 'A';

            for (int j = 0; j <= i; j++) {
                System.out.print(ch + " ");
                ch++;
            }

            System.out.println();
        }

        sc.close();
    }
}

