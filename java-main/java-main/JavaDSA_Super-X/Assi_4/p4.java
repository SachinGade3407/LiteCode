class Demo{
    public static void main(String[] args) {
        int range1Start = 1;
        int range1End = 10;
        int range2Start = 21;
        int range2End = 30;

        int sumRange1 = calculateSumOfDigitsInRange(range1Start, range1End);
        int sumRange2 = calculateSumOfDigitsInRange(range2Start, range2End);

        System.out.println("Sum of digits in range " + range1Start + " to " + range1End + ": " + sumRange1);
        System.out.println("Sum of digits in range " + range2Start + " to " + range2End + ": " + sumRange2);
    }

    static int calculateSumOfDigitsInRange(int start, int end) {
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += sumOfDigits(i);
        }
        return sum;
    }

    static int sumOfDigits(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
}

