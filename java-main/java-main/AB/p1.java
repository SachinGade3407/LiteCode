/*Sum of f(a[i], a[j]) over all pairs in an array of n integers

Given an array A of n integers, find the sum of f(a[i], a[j]) of all pairs (i, j) such
that (1 <= i < j <= n).
f(a[i], a[j]): if abs(a[j]-a[i]) > 1
f(a[i], a[j]) = a[j] - a[i]
else if abs(a[j]-a[i]) <= 1
f(a[i], a[j]) = 0
*/
class Demo {
    public static void main(String[] args) {
        int[] arr = {1,2,3,1,3};
        int result = findSumOfPairs(arr);
        System.out.println(result); 
    }    
    public static int findSumOfPairs(int[] arr) {
        int n = arr.length;
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = Math.abs(arr[j] - arr[i]);
                if (diff > 1) {
                    sum += arr[j] - arr[i];
                }
            }
        }

        return sum;
    }
}

