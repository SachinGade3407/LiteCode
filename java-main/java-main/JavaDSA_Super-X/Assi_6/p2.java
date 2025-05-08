import java.util.Scanner;

class Demo{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();
        printPattern(rows);
        scanner.close();
    }

static void printPattern(int rows) {
        int startValue = 1;

        for (int i = 1; i <= rows; i++) {
            int currentValue = startValue;
            for (int j = 1; j <= i; j++) {
                System.out.print(currentValue + " ");
                currentValue += i + j;
            }
            startValue = (i + 1) * (i + 1);
            System.out.println();
        }
    }
}

