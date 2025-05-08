import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int numRows = scanner.nextInt();
        for (int i = 0; i < numRows; i++) {
            for (char letter = 'A'; letter <= 'D'; letter++) {
                System.out.print(letter + " ");
            }
            System.out.println(); 
	    for (int j = 0; j < 4; j++) {
                System.out.print("# ");
            }
            System.out.println();
        }

        scanner.close();
    }
}

