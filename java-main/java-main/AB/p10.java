/*Fibonacci in the array Given an array arr of size N, the task is to count the number of elements of the array which are Fibonacci numbers*/

import java.util.*;

class FibonacciInArray {
    public static void main(String[] args) {
        int N = 9;
        int[] arr = {1,2,3,4,5,6,7,8,9};
        int count = countFibonacciNumbers(N, arr);
        System.out.println("Number of Fibonacci numbers in the array: " + count);
    }

    public static int countFibonacciNumbers(int N, int[] arr) {
        Set<Integer> fibonacciSet = generateFibonacciSet(N);
        int count = 0;

        for (int num : arr) {
            if (fibonacciSet.contains(num)) {
                count++;
            }
        }

        return count;
    }

    public static Set<Integer> generateFibonacciSet(int N) {
        Set<Integer> fibonacciSet = new HashSet<>();
        int a = 0, b = 1;

        while (a <= N) {
            fibonacciSet.add(a);
            int next = a + b;
            a = b;
            b = next;
        }

        return fibonacciSet;
    }
}

