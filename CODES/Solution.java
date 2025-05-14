class Solution {
    public int romanToInt(String s) {
        int total = 0;
        int prevValue = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = getValue(s.charAt(i));

            // If current value is less than previous, subtract it
            if (currValue < prevValue) {
                total -= currValue;
            } else {
                total += currValue;
            }

            prevValue = currValue;
        }

        return total;
    }

    private int getValue(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
}

public class RomanConverter {
    public static void main(String[] args) {
        Solution sol = new Solution();

        // Test cases
        System.out.println("III -> " + sol.romanToInt("III"));           // Output: 3
        System.out.println("LVIII -> " + sol.romanToInt("LVIII"));       // Output: 58
        System.out.println("MCMXCIV -> " + sol.romanToInt("MCMXCIV"));   // Output: 1994
        System.out.println("IX -> " + sol.romanToInt("IX"));             // Output: 9
        System.out.println("XL -> " + sol.romanToInt("XL"));             // Output: 40
    }
}
