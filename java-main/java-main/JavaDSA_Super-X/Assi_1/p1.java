import java.util.Scanner;
class Demo {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the starting number: ");
        int num = input.nextInt();
        input.close();

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print((num + i + j) + " ");
            }
            System.out.println();
        }
    }
}

