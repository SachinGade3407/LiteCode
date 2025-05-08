class SumOfDigits {
static int sumOfDigits(int number) {
        if (number < 10) {
            return number;  
        } else {
            int lastDigit = number % 10;
            int remainingDigits = number / 10;
            return lastDigit + sumOfDigits(remainingDigits);
        }
    }

    public static void main(String[] args) {
	
        int number = 12345;
        int result = sumOfDigits(number);
        System.out.println("The sum of digits of " + number + " is: " + result);
    }
}

