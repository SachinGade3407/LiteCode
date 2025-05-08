/*Count pairs with given sum
Given an array of N integers, and an integer K, find the number of pairs of elements in
the array whose sum is equal to K.*/

import java.util.HashMap;

class CountPairsWithSum {
    public static void main(String[] args) {
        int[] arr = {1, 5, 7, 1};
        int K = 6;

        int count = countPairsWithSum(arr, K);

        System.out.println("Number of pairs with sum " + K + ": " + count);
    }

    public static int countPairsWithSum(int[] arr, int K) {
        HashMap<Integer, Integer> frequencyMap = new HashMap<>();
        int count = 0;

        for (int num : arr) {
            int complement = K - num;
            if (frequencyMap.containsKey(complement)) {
                count += frequencyMap.get(complement);
            }
	    frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        return count;
    }
}


