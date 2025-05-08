public class MinMaxArray {
    public static void main(String[] args) {
        int[] arr = {2,6,4,3,9};
        int min = arr[0], max = arr[0];
        for(int i : arr) {
            if (i < min) min = i;
            if (i > max) max = i;
        }
        System.out.println(" "+ min + " " + max );
    }
}
            