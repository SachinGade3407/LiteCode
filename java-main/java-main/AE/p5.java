/*Peak Elements
An element is called a peak element if its value is not smaller than the value of its
adjacent elements(if they exist).
Given an array arr[] of size N, Return the index of any one of its peak elements.*/

class PeakElement {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        int peakIndex = findPeakElement(arr);

        if (peakIndex != -1) {
            System.out.println("Peak element found at index: " + peakIndex);
        } else {
            System.out.println("No peak element found in the array.");
        }
    }

    public static int findPeakElement(int[] arr) {
        int n = arr.length;

        if (n == 1) {
            return 0; 
	}

        if (arr[0] >= arr[1]) {
            return 0; 
        }

        if (arr[n - 1] >= arr[n - 2]) {
            return n - 1; 
        }

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                return i;
            }
        }

        return -1; 
    }
}

