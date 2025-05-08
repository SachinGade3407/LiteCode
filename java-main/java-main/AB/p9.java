/*Leaders in an array
Write a program to print all the LEADERS in the array. An element is a leader if it
is greater than all the elements to its right side. And the rightmost element is always a leader.*/

import java.util.ArrayList;
import java.util.Collections;

class LeadersInArray {
    public static void main(String[] args) {
        int[] arr = {16, 17, 4, 3, 5, 2};
        ArrayList<Integer> leaders = findLeaders(arr);

        Collections.reverse(leaders);

        System.out.println("Leaders in the array:");

	for (int leader : leaders) {
            System.out.print(leader + " ");
        }
    }

    public static ArrayList<Integer> findLeaders(int[] arr) {
        ArrayList<Integer> leaders = new ArrayList<>();
        int n = arr.length;
        int maxRight = arr[n - 1];
        leaders.add(maxRight);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > maxRight) {
                maxRight = arr[i];
                leaders.add(maxRight);
            }
        }

        return leaders;
    }
}


