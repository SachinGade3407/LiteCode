/*Multiply left and right array sum.
Pitsy needs help with the given task by her teacher. The task is to divide an array
into two sub-array (left and right) containing n/2 elements each and do the sum of
the subarrays and then multiply both the subarrays.*/


class MultiplyLeftRightSum {
    static int multiplyLeftRightSum(int[] arr) {
        int n = arr.length;
        
        int mid = n / 2;
        
        int leftSum = 0;
        int rightSum = 0;
        
        for (int i = 0; i < mid; i++) {
            leftSum += arr[i];
        }
        
        for (int i = mid; i < n; i++) {
            rightSum += arr[i];
        }
        
        int result = leftSum * rightSum;
        
        return result;
    }
    
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        int result = multiplyLeftRightSum(arr);
        System.out.println("Output: " + result); 
    }
}

