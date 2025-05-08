class AddOneToNumber {
    public static int[] addOne(int[] digits) {
        int n = digits.length;
        
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        int[] result = new int[n + 1];
        result[0] = 1;
        
        return result;
    }

    public static void main(String[] args) {
        int[] number = {1, 9, 9};
        int[] result = addOne(number);

        for (int digit : result) {
            System.out.print(digit + " ");
        }
    }
}

