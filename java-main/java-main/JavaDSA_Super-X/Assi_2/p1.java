import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the starting character : ");
        char startChar = input.next().charAt(0);
        input.close();

        int rowCount = 4;
        int charCount = 4;

        for (int i = 0; i < rowCount; i++) {
            char currentChar = startChar;
            for (int j = 0; j < charCount; j++) {
                System.out.print(currentChar + " ");
                currentChar++;
            }
            System.out.println();
            startChar++;
        }
    }
}

