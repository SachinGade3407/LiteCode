public class RomanConverter {
    public static void main(String[] args) {
        Solution sol = new Solution();

        // Test cases
        System.out.println("3749 -> " + sol.intToRoman(3749));  // Output: MMMDCCXLIX
        System.out.println("58 -> " + sol.intToRoman(58));      // Output: LVIII
        System.out.println("1994 -> " + sol.intToRoman(1994));  // Output: MCMXCIV
        System.out.println("9 -> " + sol.intToRoman(9));        // Output: IX
        System.out.println("4 -> " + sol.intToRoman(4));        // Output: IV
        System.out.println("40 -> " + sol.intToRoman(40));      // Output: XL
    }
}

class Solution {
    public String intToRoman(int num) {
        // Roman numeral values and their corresponding symbols
        int[] values = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        String[] symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        StringBuilder sb = new StringBuilder();

        // Loop through values and append symbols while subtracting from num
        for (int i = 0; i < values.length && num > 0; i++) {
            while (num >= values[i]) {
                sb.append(symbols[i]);
                num -= values[i];
            }
        }

        return sb.toString();
    }
}
