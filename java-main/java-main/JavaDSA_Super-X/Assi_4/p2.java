import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int numRows = scanner.nextInt();
        for (int row = 1; row <= numRows; row++) {
            for (char ch = (char)('A' + row - 1); ch >= 'A'; ch--) {
                System.out.print(ch + " ");
            }
            System.out.println(); 
        }

        scanner.close();
    }
}

