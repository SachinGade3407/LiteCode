class SecondLargestDistinctElement {
    public static void main(String[] args) {
        int[] Arr = {12, 35, 1, 10, 34, 1};
        int N = Arr.length;

        int max = Integer.MIN_VALUE;
        int secondMax = Integer.MIN_VALUE;

        for (int i = 0; i < N; i++) {
            if (Arr[i] > max) {
                secondMax = max;
                max = Arr[i];
            } else if (Arr[i] > secondMax && Arr[i] != max) {
                secondMax = Arr[i];
            }
        }

        if (secondMax != Integer.MIN_VALUE) {
            System.out.println("Second Largest Distinct Element: " + secondMax);
        } else {
            System.out.println("No second largest distinct element found.");
        }
    }
}

