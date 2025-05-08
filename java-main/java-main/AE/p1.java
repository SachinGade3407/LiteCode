/*Missing number in array Given an array of size N-1 such that it only contains distinct integer in the range of 1 to N. Find the missing element*/

class MissingNumber {
    public static void main(String[] args) {
        int N = 11;
        int[] A = {1,3,2,6,5,9,8,11,10,4};

        int totalSum = (N * (N + 1)) / 2;                               
        int arraySum = 0;

        for (int i = 0; i < A.length; i++) {
            arraySum += A[i];
        }

        int missingNumber = totalSum - arraySum;

        System.out.println("The missing number is: " + missingNumber);
    }
}

