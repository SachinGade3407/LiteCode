class Demo{
    public static void main(String[] args) {
        String inputString = "Know the code till the core";
        char letterToCount = 'o';

        int occurrenceCount = countOccurrences(inputString, letterToCount);

        System.out.println("Alphabet: " + letterToCount);
        System.out.println("Output: " + occurrenceCount);
    }
	static int countOccurrences(String input, char letter) {
        int count = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == letter) {
                count++;
            }
        }
        return count;
    }
}

