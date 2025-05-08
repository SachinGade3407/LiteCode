import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int x = input.nextInt();
        input.close();

        if (x <= 1) {
            System.out.println(x + " is not a composite number.");
        } else if (x == 2) {
            System.out.println(x + " is not a composite number.");
        } else {
            boolean isComposite = false;
            for (int i = 2; i <= Math.sqrt(x); i++) {
                if (x % i == 0) {
                    isComposite = true;
                    break;
                }
            }
            if (isComposite) {
                System.out.println(x + " is a composite number.");
            } else {
                System.out.println(x + " is not a composite number.");
            }
        }
    }
}

