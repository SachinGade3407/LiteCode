/*Immediate Smaller Element
Given an integer array Arr of size N. For each element in the array, check whether
the right adjacent element (on the next immediate position) of the array is smaller.
If the next element is smaller, update the current index to that element. If not, then -1.*/

import java.util.Arrays;
class ImmediateSmallerElement {
    public static void main(String[] args) {
        int[] arr = {4, 2, 1, 5, 3};
        int[] result = immediateSmaller(arr);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }

    public static int[] immediateSmaller(int[] arr) {
        int n = arr.length;
        int[] result = new int[n];

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                result[i] = arr[i + 1];
            } else {
                result[i] = -1;
            }
        }
        result[n - 1] = -1;

        return result;
    }
}

