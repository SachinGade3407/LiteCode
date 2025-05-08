import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter s range: ");
        int s = input.nextInt();
        System.out.print("Enter e range: ");
        int e = input.nextInt();

        input.close();

        System.out.println("Odd numbers in the range " + s + " to " + e + ":");
        for (int x = s; x <= e; x++){
            if (x % 2 != 0) {
                System.out.println(x);
            }
        }
    }
}

