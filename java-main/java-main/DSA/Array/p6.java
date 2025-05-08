class SecondLargestElement {

    public static void main(String[] args) {
        int[] arr = new int[]{ 5, 9, 3, 6, 2, 8 };

        if (arr.length < 2) {
            System.out.println("The array must have at least two elements");
            return;
        }

        int firstLargest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > firstLargest) {
                secondLargest = firstLargest;
                firstLargest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
                secondLargest = arr[i];
            }
        }

        System.out.println("The second largest element is: " + secondLargest);
    }
}

