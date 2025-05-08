/*
A B C D
B C D
C D
D
*/

class Demo{
    public static void main(String[] args) {
        char[] letters = {'A', 'B', 'C', 'D'};
        int n = letters.length;

        for (int i = 0; i < n; i++) {
           
            for (int j = i; j < n; j++) {
             
                System.out.print(letters[j] + " ");
            }
          
            System.out.println();
        }
    }
}
