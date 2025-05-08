class Demo {
    public static void main(String[] args) {
        int start = 1;
        int end = 10;

        System.out.println("Strong numbers in the range from " + start + " to " + end + ":");
        for (int i = start; i <= end; i++) {
            if (isStrongNumber(i)) {
                System.out.println(i);
            }
        }
    }
static boolean isStrongNumber(int num) {
        int originalNum = num;
        int sumOfFactorials = 0;

        while (num > 0) {
            int digit = num % 10;
            sumOfFactorials += factorial(digit);
            num /= 10;
        }

        return sumOfFactorials == originalNum;
    }

static int factorial(int n) {
        if (n == 0) {
            return 1;
        }

        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

