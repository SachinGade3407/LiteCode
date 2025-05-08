class FirstLastOccurrenceFinder {
    public static void main(String[] args) {
        int n = 9;
        int x = 5;
        int[] arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};

        int firstOccurrence = findFirstOccurrence(arr, n, x);
        int lastOccurrence = findLastOccurrence(arr, n, x);

        System.out.println(firstOccurrence + " " + lastOccurrence);
    }

    public static int findFirstOccurrence(int[] arr, int n, int x) {
        int low = 0;
        int high = n - 1;
        int firstOccurrence = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                firstOccurrence = mid;
                high = mid - 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return firstOccurrence;
    }

    public static int findLastOccurrence(int[] arr, int n, int x) {
        int low = 0;
        int high = n - 1;
        int lastOccurrence = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                lastOccurrence = mid;
                low = mid + 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return lastOccurrence;
    }
}

