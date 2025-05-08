class EquilibriumPointFinder {
    public static void main(String[] args) {
        int n = 5;
        int[] A = {1, 3, 5, 2, 2};

        int totalSum = 0;
        int prefixSum = 0;

        for (int i = 0; i < n; i++) {
            totalSum += A[i];
        }

        for (int i = 0; i < n; i++) {
            totalSum -= A[i];
            if (prefixSum == totalSum) {
                System.out.println("Equilibrium point: " + (i + 1));
                return;
            }
            prefixSum += A[i];
        }

        System.out.println("No equilibrium point found.");
    }
}

