class AmongStrong {
    public static void main(String[] args) {
        int num = 153;
        int originalNum = num;
        int result = 0;
        
        while (num != 0) {
            int digit = num % 10;
            int factorial = 1;
            
            for (int i = 1; i <= digit; i++) {
                factorial *= i;
            }
            
            result += factorial;
            num /= 10;
        }
        
        if (result == originalNum) {
            System.out.println("AmongStrong");
        } else {
            System.out.println("Not AmongStrong");
        }
    }
}

