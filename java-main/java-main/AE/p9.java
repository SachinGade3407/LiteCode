class TransitionPoint {
    public static void main(String[] args) {
        int[] arr = {0, 0, 0, 1, 1};
        int N = arr.length;
        int transitionPoint = -1; 
        int left = 0;
        int right = N - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) {
                 transitionPoint = mid;
                break;
            } else if (arr[mid] == 1) {
                 right = mid - 1;
            } else {
                 left = mid + 1;
            }
        }

        if (transitionPoint != -1) {
            System.out.println("Transition Point: " + transitionPoint);
        } else {
            System.out.println("No transition point found.");
        }
    }
}
