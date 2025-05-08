import java.util.Scanner;
class Demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int numRows = sc.nextInt();

        int currentOdd = 1;
        int currentEven = 2;

        for (int i = 0; i < numRows; i++) {
            int startNumber = (i % 2 == 0) ? currentOdd : currentEven;

            for (int j = 0; j < numRows; j++) {
                System.out.print(startNumber + " ");
                startNumber += (i % 2 == 0) ? 2 : 2;
            }

            System.out.println();

            if (i % 2 == 0) {
                currentOdd += 2 * numRows;
            } else {
                currentEven += 2 * numRows;
            }
        }

        sc.close();
    }
}

