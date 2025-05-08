import java.util.Scanner;

class Demo{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        if (containsNonLetters(inputString)) {
            System.out.println("The string contains characters other than letters.");
        } else {
            System.out.println("The string contains only letters.");
        }

        scanner.close();
    }
static boolean containsNonLetters(String str) {
        for (int i = 0; i < str.length(); i++) {
            char character = str.charAt(i);
            if (!Character.isLetter(character)) {
                return true;
            }
        }
        return false;
    }
}

