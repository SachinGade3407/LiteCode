class CheckSortedArray {
    public static void main(String[] args) {
        int[] arr = {10, 20,60,40,50};
        int N = arr.length;

        boolean isSorted = true;

        for (int i = 0; i < N - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                isSorted = false;
                break;
            }
        }

        if (isSorted) {
            System.out.println("The array is sorted in non-decreasing order.");
        } else {
            System.out.println("The array is not sorted in non-decreasing order.");
        }
    }
}

