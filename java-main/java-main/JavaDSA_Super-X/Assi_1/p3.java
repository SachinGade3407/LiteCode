import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int x = input.nextInt();
        input.close();

        if (x % 2 == 0) {
            System.out.println(x + " is an even number.");
        } else {
            System.out.println(x + " is an odd number.");
        }
    }
}

