public class Asch {
    public static void main(String[] args) {
        int[] height = {1,8,6,2,5,4,8,3,7};
        Solution sol = new Solution();
        System.out.println(sol.maxArea(height));  // Output: 49
    }
}

class Solution {
    public int maxArea(int[] height) {
        int max = 0;
        int left = 0;
        int right = height.length - 1;

        while (left < right) {
            int h = Math.min(height[left], height[right]);
            int w = right - left;
            int area = h * w;
            max = Math.max(max, area);

            // Move the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max;
    }
}
