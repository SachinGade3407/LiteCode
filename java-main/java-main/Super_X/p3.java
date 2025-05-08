class PatternPrint {
    public static void main(String[] args) {
        char currentChar = 'D';

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print(currentChar + " ");
                if (i % 2 == 0) {
                    currentChar--;
                } else {
                    currentChar++;
                }
            }
            System.out.println();
            if (i % 2 == 0) {
                currentChar = 'e';
            } else {
                currentChar = 'g';
            }
        }
    }
}

