class Demo{
    public static void main(String[] args) {
        String input1 = "Java";
        String input2 = "data";

        String toggled1 = toggleStringCase(input1);
        String toggled2 = toggleStringCase(input2);

        System.out.println("Input: " + input1 + " Output: " + toggled1);
        System.out.println("Input: " + input2 + " Output: " + toggled2);
    }

    public static String toggleStringCase(String input) {
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < input.length(); i++) {
            char currentChar = input.charAt(i);
            if (Character.isUpperCase(currentChar)) {
                result.append(Character.toLowerCase(currentChar));
            } else if (Character.isLowerCase(currentChar)) {
                result.append(Character.toUpperCase(currentChar));
            } else {
                result.append(currentChar);
            }
        }

        return result.toString();
    }
}

