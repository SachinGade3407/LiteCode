/*Find a peak element which is not smaller than its neighbors
Given an array arr of n elements that is first strictly increasing and then maybe
strictly decreasing, find the maximum element in the array.
Note: If the array is increasing then just print the last element will be the maximumvalue.*/

class FindPeakElement {
    public static void main(String[] args) {
        int[] arr = {5, 10, 20, 15};
        int max = findMaximum(arr);
        System.out.println("Maximum element: " + max);
    }

    public static int findMaximum(int[] arr) {
        int n = arr.length;

        if (arr[0] < arr[n - 1]) {
            return arr[n - 1];
        }
       if (arr[0] > arr[n - 1]) {
            return arr[0];
        }
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return arr[mid];
            } else if (arr[mid] > arr[mid - 1]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
}

