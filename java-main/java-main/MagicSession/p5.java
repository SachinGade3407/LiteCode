class MissingNumberFinder {
    public static void main(String[] args) {
        int N = 10;
        int[] A = {6, 1, 2, 8, 3, 4, 7, 10, 5};

        int expectedSum = N * (N + 1) / 2;
        int actualSum = 0;

        for (int num : A) {
            actualSum += num;
        }

        int missingNumber = expectedSum - actualSum;

        System.out.println("Missing number: " + missingNumber);
    }
}

