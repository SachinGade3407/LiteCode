import java.util.Scanner;

class FactEvenNo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        scanner.close();

        System.out.print("Factorials of even numbers in " + num + ": ");
        
        for (int i = 2; i <= num; i += 2) {
            int factorial = 1;
            for (int j = 2; j <= i; j++) {
                factorial *= j;
            }
            
            System.out.print(factorial);
            
            if (i + 2 <= num) {
                System.out.print(", ");
            }
        }
    }
}

