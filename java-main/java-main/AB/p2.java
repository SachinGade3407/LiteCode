/*Maximize sum(arr[i]*i) of an Array
Given an array A of N integers. Your task is to write a program to find the
maximum value of ∑arr[i]*i, where i = 0, 1, 2,., n 1.
You are allowed to rearrange the elements of the array.
Note: Since output could be large, hence module 109+7 and then print answer.
Example 1:
Input : Arr[] = {5, 3, 2, 4, 1}
Output : 40*/


import java.util.Arrays;

class MaximizeSum {
    static long maxSum(long[] arr) {
        long mod = 1000000007; 
        int n = arr.length;

        Arrays.sort(arr);

        long result = 0;

        for (int i = 0; i < n; i++) {
            result = (result + (arr[i] * i)) % mod;
        }

        return result;
    }

    public static void main(String[] args) {
        long[] arr = {5, 3, 2, 4, 1};
        System.out.println(maxSum(arr)); 					
    }
}

