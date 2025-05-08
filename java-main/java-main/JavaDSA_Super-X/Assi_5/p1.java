class Demo {
    public static void main(String[] args) {
        int start = 1;
        int end = 10;

        for (int i = start; i <= end; i++) {
            int number = i;
            int factorial = 1;

            while (number > 0) {
                factorial *= number;
                number--;
            }

            System.out.println("Factorial of " + i + " is " + factorial);
        }
    }
}

