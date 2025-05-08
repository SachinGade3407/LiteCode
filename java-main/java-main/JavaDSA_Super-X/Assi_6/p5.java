class Demo {
    public static void main(String[] args) {
        String input = "Meta Data";
        String output = replaceVowelsWithHash(input);
        System.out.println("Input: " + input);
        System.out.println("Output: " + output);
    }

static String replaceVowelsWithHash(String input) {
        StringBuilder result = new StringBuilder();

        for (char c : input.toCharArray()) {
            if (isVowel(c)) {
                result.append('#');
            } else {
                result.append(c);
            }
        }

        return result.toString();
    }

static boolean isVowel(char c) {
        c = Character.toLowerCase(c); 
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}

