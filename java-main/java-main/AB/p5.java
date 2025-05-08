/*Minimum Product of k Integers
Given an array of N positive integers. You need to write a program to print the
minimum product of k integers of the given array.
Note: Since output could be large, hence module 10^9+7 and then print answer.*/

import java.util.*;
class MinimumProduct {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int k = 2;
        long result = findMinimumProduct(arr, k);
        System.out.println(result);
    }

    public static long findMinimumProduct(int[] arr, int k) {
        int mod = 1000000007;
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int num : arr) {
            minHeap.offer(num);
            if (minHeap.size() > k) {
                minHeap.poll();
            }
        }

        long product = 1;
        while (!minHeap.isEmpty()) {
            product = (product * minHeap.poll()) % mod;
        }

        return product;
    }
}

