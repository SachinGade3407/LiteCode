class PatternPrint {
    public static void main(String[] args) {
        int n = 5; 

        for (int i = 0; i < n; i++) {
            char currentChar = (char) ('A' + i); 


            for (int j = 0; j < n - i; j++) {
                System.out.print(currentChar);

                if (j < n - i - 1) {
                    if (j % 2 == 0) {
                        currentChar = (char) (currentChar + 1);
                    } else {
                        currentChar = (char) (currentChar - 2);
                    }
                }
            }

            System.out.println();
        }
    }
}

