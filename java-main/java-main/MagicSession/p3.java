class PrefixStringChecker {
    public static boolean isPrefixString(String s, String[] words) {
        int n = s.length();
        int wordIndex = 0;
        int wordStart = 0;

        while (wordIndex < words.length) {
            String currentWord = words[wordIndex];
            int wordLength = currentWord.length();

            if (wordStart + wordLength > n) {
                return false;
            }

            if (s.substring(wordStart, wordStart + wordLength).equals(currentWord)) {
                wordStart += wordLength;

                if (wordStart == n) {
                    return true;
                }
            } else {
                return false;
            }

            wordIndex++;
        }

        return false;
    }

    public static void main(String[] args) {
        String s1 = "iloveleetcode";
        String[] words1 = {"i", "love", "leetcode", "apples"};
        System.out.println(isPrefixString(s1, words1));
        String s2 = "iloveleetcode";
        String[] words2 = {"apples", "i", "love", "leetcode"};
        System.out.println(isPrefixString(s2, words2));
    }
}

