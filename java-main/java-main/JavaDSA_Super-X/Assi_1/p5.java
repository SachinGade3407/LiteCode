import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = input.nextLine();
        input.close();

        int length = 0;
        for (int i = 0; i < str.length(); i++) {
            length++;
        }

        System.out.println("The length of the string is: " + length);
    }
}

