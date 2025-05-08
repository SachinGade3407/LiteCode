/*
Given an array containing n integers. The problem is to find the sum of the
elements of the contiguous subarray having the smallest(minimum) sum.
Examples:
Input : arr[] = {3, -4, 2, -3, -1, 7, -5}
Output : -6
Subarray is {-4, 2, -3, -1} = -6
Input : arr = {2, 6, 8, 1, 4}
Output : 1*/
class MinimumSubarraySum {
    public static void main(String[] args) {
        int[] arr = {3, -4, 2, -3, -1, 7, -5};

        int minSum = arr[0];
        int currentSum = arr[0];

        for (int i = 1; i < arr.length; i++) {
            currentSum = Math.min(arr[i], currentSum + arr[i]);
            minSum = Math.min(minSum, currentSum);
        }

        System.out.println("Smallest subarray sum: " + minSum);
    }
}

