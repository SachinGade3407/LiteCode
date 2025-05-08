/*Move all negative numbers to beginning and positive to end
with constant extra space
An array contains both positive and negative numbers in random order. Rearrange
the array elements so that all negative numbers appear before all positive numbers.*/

class RearrangeArray {
    public static void main(String[] args) {
        int[] arr = {-12, 11, 13, -5, 6, 7, 5, -3, -6};
        rearrangeArray(arr);
        printArray(arr);
    }

    public static void rearrangeArray(int[] arr) {
        int n = arr.length;
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            if (arr[left] < 0 && arr[right] < 0) {
                left++;
            } else if (arr[left] >= 0 && arr[right] < 0) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            } else if (arr[left] >= 0 && arr[right] >= 0) {
                right--;
            } else {
                left++;
                right--;
            }
        }
    }

    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}

