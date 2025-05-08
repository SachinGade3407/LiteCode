class SubarrayCounter {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        int N = arr.length;

        int count = (N * (N + 1)) / 2;

        System.out.println("Number of subarrays: " + count);
    }
}

