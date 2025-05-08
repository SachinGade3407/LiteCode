class FindNumber {
    public static void main(String[] args) {
        int[] arr = {4, 5, 6, 9, 7, 5, 9};
        int n = arr.length;

        int maxLeft = Integer.MIN_VALUE;
        int result = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= maxLeft) {
                maxLeft = arr[i];
                result = arr[i];
            }
        }

        if (result != -1) {
            System.out.println("The number is: " + result);
        } else {
            System.out.println("No such number found in the array.");
        }
    }
}

