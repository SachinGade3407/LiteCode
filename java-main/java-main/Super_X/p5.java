class ReverseAndSuccessiveSum {
    public static void main(String[] args) {
        int number = 45689;
        int reversedNumber = 0;
        int tempNumber = number;
        int length = 5;
        int[] sumArray = new int[length];
        while (tempNumber != 0) {
            int digit = tempNumber % 10;
            reversedNumber = reversedNumber * 10 + digit;
            tempNumber /= 10;
        }

        for (int i = 0; i < length; i++) {
            sumArray[i] = reversedNumber;
            reversedNumber -= 3;
        }

        System.out.println("Original Number: " + number);
        System.out.println("Reversed Number: " + reversedNumber);
        System.out.print("Successive number sum array: ");
        for (int i = 0; i < sumArray.length; i++) {
            System.out.print(sumArray[i]);
            if (i < sumArray.length - 1) {
                System.out.print(", ");
            }
        }
    }
}

