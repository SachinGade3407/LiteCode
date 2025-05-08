class Demo{
    public static int maxSubarraySum(int[] nums, int K) {
        if (nums == null || nums.length < K) {
            throw new IllegalArgumentException("Invalid input");
        }

        int maxSum = 0;
        int currentSum = 0;
 	for (int i = 0; i < K; i++) {
            currentSum += nums[i];
        }
        maxSum = currentSum;
        for (int i = K; i < nums.length; i++) {
            currentSum = currentSum - nums[i - K] + nums[i];
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }
    public static void main(String[] args) {
        int[] nums = {-3,4,-2,5,3,-2,8,2,1,4};
        int K = 3;
        int result = maxSubarraySum(nums, K);
        System.out.println("Maximum subarray sum of length " + K + " is: " + result);
    }
}

