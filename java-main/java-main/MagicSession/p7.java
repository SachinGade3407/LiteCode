class MaxProductSubarray {
    public static void main(String[] args) {
        int N = 5;
        int[] Arr = {6, -3, -10, 0, 2};

        int maxProduct = Arr[0];
        int minProduct = Arr[0];
        int result = Arr[0];

        for (int i = 1; i < N; i++) {
            if (Arr[i] < 0) {
                int temp = maxProduct;
                maxProduct = minProduct;
                minProduct = temp;
            }

            maxProduct = Math.max(Arr[i], maxProduct * Arr[i]);
            minProduct = Math.min(Arr[i], minProduct * Arr[i]);

            result = Math.max(result, maxProduct);
        }

        System.out.println("Maximum product subarray: " + result);
    }
}

