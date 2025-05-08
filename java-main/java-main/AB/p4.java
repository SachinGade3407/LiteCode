/*Print an array in Pendulum Arrangement

Given an array arr of size n. Arrange the elements of the array in a way similar to
the to-and-fro movement of a Pendulum.
The minimum element out of the list of integers, must come in the center position
of the array. If there are even elements, then minimum element should be moved to
(n-1)/2 index (considering that indexes start from 0)
The next number (next to minimum) in the ascending order, goes to the right, the
next to next number goes to the left of the minimum number and it continues like a
Pendulum.
As higher numbers are reached, one goes to one side in a to-and-fro manner similar
to that of a Pendulum*/

import java.util.Arrays;

class PendulumArrangement {
    static void pendulumArrange(int[] arr) {
        int n = arr.length;
        
        Arrays.sort(arr);
        
        int[] result = new int[n];
        
        int left = (n - 1) / 2;
        int right = left + 1;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result[left] = arr[i];
                left--;
            } else {
                result[right] = arr[i];
                right++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(result[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 3, 2, 5, 4};
        pendulumArrange(arr);
    }
}

